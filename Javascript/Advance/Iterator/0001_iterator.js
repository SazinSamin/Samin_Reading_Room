// https://www.youtube.com/watch?v=JXzQ0Aarnzc&list=PLHiZ4m8vCp9Nflbo9a0pZuLscG_Xc7DKq&index=19
// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Iteration_protocols


// Traversing any array, string or object elements through iterator is much much faster that normal looping  


// iterable: means which can be iterated(ex: Array, String);
// iterator: means which traverse through the iterable object.


// iterator used by for..in, for..of, spread operator internally in javascript


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

