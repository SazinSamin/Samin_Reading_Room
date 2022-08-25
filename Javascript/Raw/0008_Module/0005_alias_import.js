// we can rename in time of import. 
import {addition as add, sub as subtraction, stu as student} from "./script.js";
import * as calculation from "./script.js" // carefull, this statement may leads to error


// we can also rename in time of export.
export {add as addition, subtruct as sub, Student as stu};

