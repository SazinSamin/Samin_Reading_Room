const string1 = "The earth moves around the sun !!!";

// the sortcut of [A-Za-z0-9_] is \w.

const regEx = /\w/g;
const result = string1.match(regEx);
console.log(result);



// the sortcut of [^A-Za-z0-9_] is \W. notice that here we have (^) negate character which 
// exludes the given character in regEx.
// also W is in capital letter.


const regExN = /\W/g;
const resultN = string1.match(regExN);
console.log(resultN);
