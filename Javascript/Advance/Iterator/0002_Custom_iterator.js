
// custom iterator, override the built-in iterator method in js.
Array.prototype[Symbol.iterator] = function () {
        let count = this.length;
        let arr = this;
        return {
                next : function () {
                        if(count) {
                                return {
                                        done: false,
                                        value: arr[arr.length - (count--)]
                                }
                        }
                        return {
                                done: true,
                                value: undefined,
                        }
                }
        }
}

const arr1 = [1, 2, 3];


let iterator2 = arr1[Symbol.iterator]();
console.log(iterator2);
console.dir(iterator2.next());
console.dir(iterator2.next());
console.dir(iterator2.next());
console.dir(iterator2.next());






// another custom iterator with custom iterable
function rangeLoop (start, step, end) {
        let curr = start;
        return {
                [Symbol.iterator] : function () {
                        return {
                                next: function () {
                                        const res = {
                                                done: false,
                                                value: curr,
                                        }
                                        curr += step;
                                        if(curr < end) {
                                                return res;
                                        }
                                        return {
                                                done: true,
                                                value: undefined,
                                        }
                                }
                        }
                }
        }
}

console.log([...rangeLoop(1, 2, 20)]);
