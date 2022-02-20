// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/find


// return the first element which statisfy the condition otherwire return "undefined".

const array = [1, 3, 5, 7, 8, 9, 11];

const res = array.find((ele) => ele % 2 === 0);
console.log(res);
