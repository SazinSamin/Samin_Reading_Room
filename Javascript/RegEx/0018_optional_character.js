// https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/regular-expressions/check-for-all-or-none
// putting question mark after a character means that character is optional.

const string1 = "Travelled";
const string2 = "Traveled";
const regEx = /Travell?ed/;

console.log(regEx.test(string1));
console.log(regEx.test(string2));


const string3 = "Bann";
const string4 = "Ba";
const regEx2 = /Ban?n?/;
console.log(regEx2.test(string3));
console.log(regEx2.test(string4));
