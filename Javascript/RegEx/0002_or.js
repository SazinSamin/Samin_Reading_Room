// using or(|) operator we match more than one match, if one of the regEx match it will return true.
// don't use any spaces between or(|) symbol.

const languages = "Java, Javascript, Python, Rust Go are the most popular languages in the world.";
const regEx = /Python|Javascript/;
console.log(regEx.test(languages));
