


// private variables & methods have only scope in class, means they are only avaiable inside the class,
// to declear a private property start the property name with #. 

class Person {
    firstName;
    lastName;
    // private variable, decleare with #, 
    #age;

    constructor(fName, lName, age) {
            this.firstName = fName;
            this.lastName = lName;
            this.#age = age;
    };

    getName() {
            return `Name: ${this.firstName} ${this.lastName}, age: ${this.#getAge()}`;
    }

    // private method, declear with #.
    #getAge() {
            return this.#age;
    }
}

const p1 = new Person("Ahsique", "Ahmed", 25);
console.log(p1.firstName);
console.log(p1.age);    // undefined
console.log(p1.getName());
console.log(p1.getAge()); // TypeError: p1.getAge is not a function
