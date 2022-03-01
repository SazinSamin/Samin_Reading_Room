// https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/object-oriented-programming/understand-own-properties
// https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/object-oriented-programming/use-prototype-properties-to-reduce-duplicate-code
// https://developer.mozilla.org/en-US/docs/Learn/JavaScript/Objects/Object_prototypes


// another use case of prototype
// https://github.com/SazinSamin/Samin_Reading_Room/blob/main/Javascript/Objects/0007_Prototype.js


// In javascipt there are two types of property.
// "Own properties" & "Prototype".


// prototype also use for inheritance.



// Own properties are defined directly inside the Object. below example "firstName, lastName, age"
// are the own properties. That means p1 & p2 has own seprate copy of this properties. Every instance
// we instantiate from this Object will have there own copy of these properties.

function Person (fName, lName, age) {
        this.firstName = fName;
        this.lastName = lName;
        this.age = age;
};


const p1 = new Person("Mirza", "Galib", 23);
const p2 = new Person("Alam", "Hasan", 31);

console.log(p1);
console.log(p2);


// Prototype.
// If we need a value for all instance of Person, then all the instance have that value own copy, 
// This is not gonna be a problem for one or two values, but if there are lots of same values, then 
// there will have lots of same duplicate values.

// So we should use the prototype of Object. Properties in the prototype are shared 
// among all instances of that Object. 

// Here we add a prototype property name location
// Both the p1 & p2 have the same values but no duplicate.


Person.prototype.location = "Dhaka";

console.log(p1.location);
console.log(p2.location);
