const string1 = "The earth move around the sun";

// \s matches any whitespace character.
// \s is similar to character class [ \r\t\f\n\v];
const regEx = /\s/g;
const result = string1.match(regEx);
console.log(result);


// /S/g matches any non-whitespace character.
// \S is similar to character class [^ \r\t\f\n\v];
const regExNW = /\S/g;
const resultNW = string1.match(regExNW);
console.log(resultNW);
