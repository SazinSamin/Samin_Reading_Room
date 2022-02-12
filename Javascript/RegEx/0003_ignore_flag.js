// https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/regular-expressions/ignore-case-while-matching

const string = "How are you doing?";
// i refer to ignore flag, it will match despite any case sensivity. 
const regEx = /DoIng/i;
console.log(regEx.test(string));
