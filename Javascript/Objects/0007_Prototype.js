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
