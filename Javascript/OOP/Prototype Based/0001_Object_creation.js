// creation of Object

// Using Object literal
const Person1 = {
    firstName: "Irfan",
    lastName: "Ahmed",
    getName () {
            console.log(`${this.firstName} ${this.lastName}`);
    }
};

console.log(Person1.firstName);
Person1.getName();


// Using Object Constructor
function Person2(fName, lName) {
    this.firstName = fName;
    this.lastName = lName;
    this.getName = function () {
            console.log(`${this.firstName} ${this.lastName}`);
    };
}

const p2 = new Person2("Salman", "Ahmed");
console.log(p2.firstName);
p2.getName();



// Using new
const person4 = new Object();
person4.firstName = 'Muktaq';
person4.lastName = 'Ahmed';

console.log(person4.firstName);



// Using Object.create(), method take an existing object as prototype & create new object from that.
// It inherit the property of SuperObject or given object in Object.create().
const Person3 = {
    firstName: "Hasan",
    lastName: "Ahmed",
    getName () {
            console.log(`${this.firstName} ${this.lastName}`); 
    }
}

const p3 = Object.create(Person3);
console.log(p3.firstName);
p3.getName();


// another example
const p4 = Object.create(p2);
console.log(p4.firstName);
p4.getName();
