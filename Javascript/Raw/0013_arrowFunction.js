// arrow function
// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Functions/Arrow_functions



// Arrow functions don't have their own bindings to this, arguments or super, and should not be used as methods.
// see array function constrain -> https://stackoverflow.com/questions/53900013/arrow-functions-i-cant-access-the-object-outside








let myFunction = (a, b) => a + b;
console.log(myFunction(20, 20));

// if we use the traditional curly brackets after the arrow function, then we have to use the "return"
// keyword inside, otherwise it won't gonna return any value.
// also curly bracer use for multiline code inside the arrow function.
let myFunction2 = (a, b) => {
        return a + b;
};
console.log(myFunction2(20, 20));




// in case of one parameter we can omit the braces.
let myFunction3 = a => a;




