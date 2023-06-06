// default import doesn't uses curly braces {}
// we can change the name of any named function when use default import
 // when we have default export, then in time of import we can give any name to the import files & it return the default
 // export element.
 
import multi from "./script.js";

console.log(multi(10, 20));

// don't know much about this two types of default import
const { default: logger } = require("redux-logger");
const thunk = require("redux-thunk").default;
