// https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/regular-expressions/find-characters-with-lazy-matching

// typically regEx use greedy match means it will return the longest possible part of the string that match with the regEx.
// example: if we have a string "Bangladesh" and  we want to match a regEx which  start with B and ends with a it will return "Bangla" 
// which the longest possible match.

// so to get shortest possible match or lazy match we need to use question mark symbol (?) in corresponding position.

const string1 = "Bangladesh";
const regEx = /B[a-z]*?a/;
const result = string1.match(regEx);
console.log(result);
