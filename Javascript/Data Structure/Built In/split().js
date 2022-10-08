// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/String/split


// split(), split an string into substring.
// return an array.
// take a pattern as parameter for seperation.



const str = "Bangladesh is a riverine country";

// seperate by spaces.
const arr1 = str.split(' ');

// seperate each character.
const arr2 = str.split('');

// we can limit the speration also, after crossing limit, rest of string won't included.
const arr22 = str.split('', 3);

// split also take mutiple character for seperation.
const arr3 = str.split('is');

console.log(arr1);
console.log(arr2);
console.log(arr3);
