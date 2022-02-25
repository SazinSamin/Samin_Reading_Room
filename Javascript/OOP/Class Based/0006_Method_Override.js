// method overriding
// method override allow subclass to define a method which have same name like 
// one of parent class method

class Person{
        constructor(name, age) {
                this.name = name;
                this.age = age;
        }
        display() {
                return `Name: ${this.name}, Age: ${this.age}`;
        }
}


class Student extends Person {
        constructor(name, age, id) {
                super(name, age);
                this.id = id;
        }

        // method override
        // here we redefine one of parent class method in superclass.
        display() {
                return `${super.display()}, id: ${this.id}`;
        }
}


const p1 = new Person("Hasan", 22);
console.log(p1.display());

const s1 = new Student("Umam", 34, 43);
console.log(s1.display());
