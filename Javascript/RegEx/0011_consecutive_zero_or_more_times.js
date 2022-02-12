const string1 = "mississippi missouri";

// find out a consecutive same character using "*" after the character.
// where the "+" leads to once or more match, it will do zero or more match in the given string. if zeros occurs it also return that time with "" empty string.
// e.g. "mississippi" => "ss" here we have two consecutive same character "ss".

const regEx = /s*/g;
const result = string1.match(regEx);
console.log(result);


const string2 = "eeeeeeeeeea";
const regEx2 = /e*/g;
console.log(string2.match(regEx2));
