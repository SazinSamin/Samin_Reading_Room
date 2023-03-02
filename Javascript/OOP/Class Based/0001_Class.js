// UpperCamelCase should be used by convention for ES6 class names

class Person {

        // property declearation is optional, we can omit it, if we omit, the constructor will automatically
        // create the property before initialization. But declaration is good for other programmer to
        // understand the code & identify the properties belongs to the class.
        // we also don't need to specify the data type inside the class.
        firstName;
        birthYear;

        // constructor method.
        // always add constructor method, if you forget js will add for you.
        constructor(name, birthYear) {
                this.firstName = name;
                this.birthYear = birthYear;
        }

        // inside a class we don't have "function" keyword to declear a function or method.
        getAge(currentYear = new Date().getFullYear()) {
                console.log(`${this.firstName} ${currentYear - this.birthYear}`);
        }
};

// initialize the instance variable through passing value to the constructor
// and creation of a Class instance
// We have to initialize object with keyword "new" nor it won't work.
// The constructor is invoked when new is called to create a new object.

const person1 = new Person("Azim", 1998);
person1.getAge();

// in one line
new Person("Ahique", 1995).getAge();
