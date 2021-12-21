// Methods are functions stored as object properties.

const person1 = {
        firstName: "Sazin",
        lastName: "Samin",
        age: 24,
        // object method
        details: function () {
                return `Name: ${this.firstName} ${this.lastName}\n Age: ${this.age}`;
        }
}

console.log(person1.details());
// without "()", the funciton defintion will return


// example of built in method
let string1 = "hello world";
console.log(string1.toUpperCase());
