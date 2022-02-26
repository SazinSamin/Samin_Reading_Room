// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/map


// map do the given operation on each element & return  a new array by adding the result to the new array.
// It doesn't mutate the original array.

const array = [1, 2, 3, 4, 5];
const double = array.map((ele) => ele * 2);

console.log(double);
