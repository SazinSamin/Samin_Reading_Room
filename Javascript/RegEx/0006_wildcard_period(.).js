const string1 = "pan";
const string2  = "nan";
const string3 =  "can"; 

// this dot(.) is here a wildcard character
// it means any character in the dot(.) and other rest character is matched then regEx will matched.
// the dot(.) also called "period".

const regEx = /.an/;
console.log(regEx.test(string1));
console.log(regEx.test(string2));
console.log(regEx.test(string3));
