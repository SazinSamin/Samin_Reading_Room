// Math.max() methods to find the maximum elements of an array.

// max() method expect multiple arguments.
console.log(Math.max(1, 2, 3, 4, 5));

// if we want to use array then we have to use "spread (...args)" operator.
const array = [1, 2, 3, 4, 5];
console.log(Math.max(...array));

// we can also use " Math.max.apply(array); " for array
