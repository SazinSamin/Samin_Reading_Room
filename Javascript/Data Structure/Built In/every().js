// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/every

const arr = [10, 20, 30, 40, 50, 60];


// every() return true if all the elements of an array statisfy the condition.
// if any of element can't statisfy the condition every immediate return false.
// it doesn't mutate the original array. only return new true or false value.
// empty array always return true.

const res = arr.every((ele) => ele < 100);
console.log(res);
