// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/concat


// concate() combined two array by run on an array & takes another array as parameter.
// it also concate string, number, boolean as well.
// it doesn't mutate any of it's given array.
// return a completely new array.

const a = [4, 5, 6, 7];
const b = [1, 2, 3, 74];
const c = a.concat(b);
console.log(c);


// MDN website have written that concate() do shallow copy, means it actullay copy the reference, so if any array mutate, then it reflect
// to another array as well, but don't find that on practical by mutating a, b , or c array.
