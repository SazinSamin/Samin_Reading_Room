// ***One important things to remember to use carat (^) as negated character we have to use square bracket and use that carat symbol
// inside the square bracket[], otherwise it will be use as match at beginning of the string regEx.
// link: https://github.com/SazinSamin/Samin_Reading_Room/blob/main/Javascript/RegEx/0013_match_at_begining.js




// the carat character (^) we used in the regex to exclude those characters that are matched.
// like in here 2 to 6 and a to e character would be excluded.


const string1 = "Bangladesh, to the east of India on the Bay of Bengal, is a South Asian country marked by lush greenery and many waterways. Its Padma (Ganges), Meghna and Jamuna rivers create fertile plains, and travel by boat is common. On the southern coast, the Sundarbans, an enormous mangrove forest shared with Eastern India, is home to the royal Bengal tiger. 2847872365";

const regEx = /[^2-6a-e]/gi;
const result = string1.match(regEx);
console.log(result);



// excluding a single character.

const string1 = "United International University";
const regEx = /[^n]/gi;
const result = string1.match(regEx);
console.log(result);    
