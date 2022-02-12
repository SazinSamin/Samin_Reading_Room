// https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/regular-expressions/match-characters-that-occur-one-or-more-times
const string1 = "mississippi missouri";


// find out a consecutive same character using "+" after the character.
// e.g. "mississippi" => "ss" here we have two consecutive same character "ss".

const regEx = /s+/g;
const result = string1.match(regEx);
console.log(result);


const string2 = "eeeeeeeeeea";
const regEx2 = /e+/g;
console.log(string2.match(regEx2)); // return eeeeeeeeee
