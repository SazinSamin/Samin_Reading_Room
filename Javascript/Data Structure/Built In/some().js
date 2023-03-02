// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/some

const arr = [10, 20, 30, 40, 50, 60];

// some() will return true if one of the element satisfy the condition.
// otherwise return false.
// it doesn't mutate the original array.
// call on an empty function return false in any condition.
const res =  arr.some((ele) => ele > 20);
console.log(res);
