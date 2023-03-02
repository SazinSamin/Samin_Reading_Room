// *** careful, carat also used for negated character set
// link: https://github.com/SazinSamin/Samin_Reading_Room/blob/main/Javascript/RegEx/0009_negated%20character%20sets.js


// caract symbol (^) used as to match a pattern at the beginning of a string.
// if the match is not in the beginning of the string, the match will fail or test will return false. 


const string1 = "United International University";
const regEx = /^United/gi;
const result = string1.match(regEx);
console.log(result);    
