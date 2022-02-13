// dollar sign ($) used as to match a pattern at the end of a string.
// if the match is not in the end of the string, the match will fail or test will return false. 


const string1 = "United International University";

const regEx = /University$/gi;
const result = string1.match(regEx);
console.log(result);    
