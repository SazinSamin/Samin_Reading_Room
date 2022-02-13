const string1 = "The earth moves around the sun !!!";



// the shortcut of [A-Za-z0-9_] is \w.
const regEx = /\w/g;
const result = string1.match(regEx);
console.log(result);




// the shortcut of [^A-Za-z0-9_] is \W. notice that here we have (^) negate character which 
// exludes the given character in regEx.
// also W is in capital letter.
const regExN = /\W/g;
const resultN = string1.match(regExN);
console.log(resultN);




// the shortcut for digit [0-9] is \d.
const string2 = "War 1971";
const regExD = /\d/g;
const resultD = string2.match(regExD);
console.log(resultD);




// the shortcut for non-digi [^0-9] is \D.
const regExDE = /\D/g;
console.log(string2.match(regExDE));



