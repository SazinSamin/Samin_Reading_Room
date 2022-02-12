// https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/regular-expressions/match-letters-of-the-alphabet


const string1 = "Bangladesh, to the east of India on the Bay of Bengal, is a South Asian country marked by lush greenery and many waterways. Its Padma (Ganges), Meghna and Jamuna rivers create fertile plains, and travel by boat is common. On the southern coast, the Sundarbans, an enormous mangrove forest shared with Eastern India, is home to the royal Bengal tiger. 2847872365";

// using character classes we have to use individual characters to find out the result. but if the character are many then it will be tedious.
// so can use hyphen"-" to select a range of characters.
const regEx = /[a-s]/gi;
const result = string1.match(regEx);
console.log(result);




// we can also use this for also alphabets like 0-9.
// we also can set multiple range of characters to match.

const regEx = /[a-cx-z2-6]/gi;
const result = string1.match(regEx);
console.log(result);
