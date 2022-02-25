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
console.log(p1.age);    // leads to syntex error, we can't access private variable outside the class.
console.log(p1.getName());
console.log(p1.getAge());    // leads to syntex error, we can't access private method outside the class.
