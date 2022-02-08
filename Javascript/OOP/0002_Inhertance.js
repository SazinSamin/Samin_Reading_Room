class Person{
        constructor(name, age) {
                this.name = name;
                this.age = age;
        }

        display() {
                console.log(`${this.name}, ${this.age}`);
        }
}

// use "extends" keyword for new class to inherit method
class Student extends Person{
        constructor(name, age, id) {
                // The super() method refers to the parent class.
                // By calling the super() method in the constructor method, we call the parent's
                // constructor method and gets access to the parent's properties and methods.
                super(name, age);
                this.id = id;
        }
}

const s1 = new Student("Sazin", 24, 191011);
s1.display();
