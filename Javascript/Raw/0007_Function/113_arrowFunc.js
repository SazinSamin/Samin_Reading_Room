// arrow function
// "this" behave different in arrow function. => https://github.com/SazinSamin/Samin_Reading_Room/blob/main/Javascript/Good_Practice/1117_this_in_arrow_function.js

const myFunction = (a, b) => { return a + b; };
console.log(myFunction(10, 20));

// we can omit the parameter braches if there is only one argument
// and  "return" keyword also.
const foo = val => val;
console.log(foo(10));

