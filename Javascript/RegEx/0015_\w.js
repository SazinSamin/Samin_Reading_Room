const string1 = "The earth moves around the sun";


// the sortcut of [A-Za-z0-9_] is \w.


const regEx = /\w/g;
const result = string1.match(regEx);
console.log(result);
