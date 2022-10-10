// https://www.youtube.com/watch?v=DNC6MxpCueY&list=PLHiZ4m8vCp9Nflbo9a0pZuLscG_Xc7DKq&index=19
// see from 19 minutes

// Make an object iterable.

const obj1 = {
        idx1: 10,
        idx2: 20,
        idx3: 30,
        idx4: 40,
};

Object.prototype[Symbol.iterator] = function () {
        const objArr = Object.entries(obj1);
        let length = objArr.length;

        return {
                next: function () {
                        if(length--) {
                                return {
                                        value: objArr[objArr.length - (length + 1)][1],
                                        done: false,
                                }
                        }
                        return {
                                value: undefined,
                                done: true,
                        }
                }
        }
}


// here we get the iterator from Symbol.iterator properties of the object.
let iterator = obj1[Symbol.iterator]();
console.log(iterator);
// calling next() in iterator go for the next element in the object
console.log(iterator.next());
console.log(iterator.next());
console.log(iterator.next());
console.log(iterator.next());
console.log(iterator.next());

// as our iterator function is in the properties of Javascript object and for...of loop use iterator in backend
// so now we can loop through the object like Array and String.
for(let ele of obj1) {
        console.log(ele);
}

// Spread operator also in backend use iterator, so we can use the spread operator in our object also.
console.log([...obj1]);



