const string = "United International University";
const regEx = /University/;
console.log(string.match(regEx));

// it will return the "string" which exacly match the regular expression
console.log(string.search(regEx)[0]);
