// https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/regular-expressions/check-for-mixed-grouping-of-characters


// Fix the regex so that it checks for the names of Franklin Roosevelt or Eleanor Roosevelt in a case sensitive manner and it
// should make concessions for middle names.

let myString = "Eleanor Roosevelt";
let myRegex = /(Franklin|Eleanor) ?.?.? Roosevelt/i; // Change this line
let result = myRegex.test(myString); // Change this line
// After passing the challenge experiment with myString and see how the grouping works
