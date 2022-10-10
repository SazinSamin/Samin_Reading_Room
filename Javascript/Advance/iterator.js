// https://www.youtube.com/watch?v=JXzQ0Aarnzc&list=PLHiZ4m8vCp9Nflbo9a0pZuLscG_Xc7DKq&index=19



// iterable: means which can be iterated(ex: Array, String);
// iterator: means which traverse through the iterable object.


let str = new String("Uni");
let arr = [2, 3, 9, 7];

// get the iterator from the iterable object properties
let iterator = str[Symbol.iterator]();

// iterate through the array values using next() method
console.log(iterator.next());
console.log(iterator.next());
console.log(iterator.next());
console.log(iterator.next());



// Condition to be an iterable
// 1. Must have a Symbol.iterator in properties or somewhere in prototype chain, has to be an Object which has to return 
// a function.
// 2. An iterator must have return if we call that function which return from Symbol.itertor. 


// Condition to be an iterator
// 1. Symbol.iterator must return an iterator which have to be an Object.
// 2. The iterator Object must have implementation of "next()" method.
// 3. the next() method return an Object with two properties "done" and "value".

// and example:
console.log("university"[Symbol.iterator]().next());




// custome iterator, override the built-in iterator method in js.
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
