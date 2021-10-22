var myString = "I am really hungry for some";
console.log(myString);
// var myUpperString = myString.toUpperCase();
// console.log(myUpperString);


var reallyLocation = myString.search("really");


// This substr here return me the whole "really" word instead of re.
// I have tested in Dart, which gives me right result.
var specialWord =  myString.substr(5, 7);
console.log(specialWord);

