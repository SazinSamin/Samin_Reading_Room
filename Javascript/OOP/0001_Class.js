// UpperCamelCase should be used by convention for ES6 class names


// In ES5, we usually define a constructor function and use the new keyword to instantiate an object.
/*
let Person = function(name, birthYear) {
        this.name = name;
        this.birthYear = birthYear;
}
const p1 = new Person('Green', 24);
*/


class Person {
        // constructor method.
        // always add constructor method, if you forget js will add for you.
        constructor(name, birthYear) {
                this.firstName = name;
                this.birthYear = birthYear;
        }

        getAge(currentYear = new Date().getFullYear()) {
                console.log(`${this.firstName} ${currentYear - this.birthYear}`);
        }
};

// initialize the instance variable through passing value to the constuctor
// and creation of a Class instance
// We have to initialize object with keyword "new" nor it won't work.
// The constructor is invoked when new is called to create a new object.

const person1 = new Person("Sazin", 1998);
person1.getAge();

// in one line
new Person("Ahique", 1995).getAge();
