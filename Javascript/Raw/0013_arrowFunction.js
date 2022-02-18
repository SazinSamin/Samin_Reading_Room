// arrow function

let myFunction = (a, b) => a + b;
console.log(myFunction(20, 20));

// if we use the traditional curly brackets after the arrow function, then we have to use the "return"
// keyword inside, otherwise it won't gonna return any value.
let myFunction2 = (a, b) => {
        return a + b;
};
console.log(myFunction2(20, 20));




// in case of one parameter we can omit the braces.
let myFunction3 = a => a;
