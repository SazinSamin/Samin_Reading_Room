// Javascript has three types of variable var, let, const
// var: https://www.w3schools.com/js/js_variables.asp
// let: https://www.w3schools.com/js/js_let.asp
// const: https://www.w3schools.com/js/js_const.asp




// var is basic variable declearation
var x = 10;
console.log(x);
// if a variable used before it's decleartion value is "undefined"
var y;
console.log(y);

// re - declare a JavaScript variable, it will not lose its value.
var x;
console.log(x);


// let:
// cannot be Redeclared.
// must be Declared before use.
// have Block Scope.
let a = 20;
console.log(a);
{ let a = 30; console.log(a); }
console.log(a);


// const:
// cannot be Redeclared and reassigned
// have Block Scope.
// const value have to assigned where it decleared
const PI = 3.1416;
// const does not define a constant value.It defines a constant reference to a value.
// so we can't reassign the value, but change the elements of const array, or properties of const object
const car = ["BMW", "VOLVO", "Marcedes"];
car[1] = "Ford";
for(let x of car){
        console.log(x);
}

