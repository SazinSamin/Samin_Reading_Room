// This code has problem, leads to 
// script.js:10 Uncaught TypeError: Cannot read properties of undefined (reading 'firstName')
//   at Person.getName (script.js:10:39)
//   at script.js:19:9



function Person (first, last, age) {
        this.firstName = first;
        this.lastName = last;
        this.age = age;
};

// using js "prototype" property allow to add property or method to the
// Object constructor directly outside the constructor function
Person.prototype.job = "Software engineer";
Person.prototype.getName = () =>  this.firstName + " " + this.lastName;

let person1 = new Person("Sazin", "Samin", 24);

for(let i in person1) {
        console.log(person1[i]);
}
