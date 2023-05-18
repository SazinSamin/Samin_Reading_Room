// https://dmitripavlutin.com/differences-between-arrow-and-regular-functions/
// https://dmitripavlutin.com/gentle-explanation-of-this-in-javascript/#32-pitfall-separating-method-from-its-object
// https://www.youtube.com/watch?v=5ccXpH0nlc8
// https://www.w3schools.com/js/js_arrow_function.asp


// "this" behave different in javascript arrow function.


// in regular function "this" represent the object that called the function.
// in arrow function "this" represent the owner's of the function.


// From chatGPT
/*
In JavaScript, the value of the this keyword inside a normal method depends on how the method is called. 
The behavior of this can be a bit tricky and confusing.

When you define a normal method in JavaScript using the traditional function syntax, the value of this inside that method is 
determined by how the method is called. If the method is called as a regular function, this will typically be undefined in 
strict mode or the global object (e.g., window in a browser) in non-strict mode. This behavior occurs because regular function 
calls do not have a specific context, and this defaults to the global object.
However, when you use the ES6 arrow function syntax (() => {}), the value of this is lexically bound to the enclosing context. 
This means that this inside an arrow function refers to the this value of the surrounding scope, 
regardless of how the arrow function is called. The arrow function does not have its own this value.

Here's an example to illustrate the difference:


// Traditional method using regular function syntax
const obj1 = {
  name: "Object 1",
  sayHello: function() {
    console.log(this.name);
  }
};

obj1.sayHello(); // Output: "Object 1"

const regularFunction = obj1.sayHello;
regularFunction(); // Output: undefined or global object (depends on strict mode)

// ES6 method using arrow function syntax
const obj2 = {
  name: "Object 2",
  sayHello: () => {
    console.log(this.name);
  }
};

obj2.sayHello(); // Output: "Object 2"

const arrowFunction = obj2.sayHello;
arrowFunction(); // Output: "Object 2"

As you can see in the example, the regular function loses its context when assigned to another variable (regularFunction), 
resulting in undefined or the global object being logged when called. On the other hand, the arrow function retains the 
lexical scope and correctly outputs the value of this from the surrounding context, even when assigned to a different 
variable(arrowFunction).

It's important to note that while arrow functions can be convenient, 
they may not always be suitable for every use case due to their different behavior regarding this. Traditional
function syntax should still be used when you need dynamic scoping or when you explicitly want to bind this to a specific 
context using methods like call() or apply().
*/




