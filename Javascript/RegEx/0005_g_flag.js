// https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/regular-expressions/find-more-than-the-first-match

// find more than a match.
const string1 = "Twinkle, twinkle, little star";
const regEx = /Twinkle/g;
console.log(string1.match(regEx)[0]);


// we should use i flag to ignore case to resolve any case sensitivity.
const regEx2 = /Twinkle/gi;


// result'
console.log(string1.match(regEx2));
// get the first match.
console.log(string1.match(regEx2)[0]);
// get the second match.
console.log(string1.match(regEx2)[1]);
