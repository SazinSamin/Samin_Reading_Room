// https://www.samanthaming.com/tidbits/39-es6-classes/


class Person{
        constructor(name, age) {
                // instance variable
                this.name = name;
                this.age = age;
        }

        // instance method
        display() {
                return this.name + " " + this.age;
        }

        // class variable
        static status = "";
        //  class method
        static showStatus() {
                console.log(this.status);
        }
};

// instance member initialization
const instance = new Person("Sazin", 24);
const instanceMethod = instance.display();
console.log(instanceMethod);

const instanceMethod2 = new Person("Sazin", 24).display();
console.log(instanceMethod2);

// class variable initialization
Person.status = "Software engineer";
// class method invocation.
Person.showStatus();


