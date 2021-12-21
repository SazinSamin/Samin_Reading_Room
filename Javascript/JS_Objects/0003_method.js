// Methods are functions stored as object properties.

const person1 = {
        firstName: "Sazin",
        lastName: "Samin",
        birthYear: 1999,
        // object method
        details: function () {
                return `Name: ${this.firstName} ${this.lastName}\n birthYear: ${this.birthYear}`;
        }
}

console.log(person1.details());
// without "()", the funciton defintion will return


person1.age = function(currentYear){
        return currentYear - this.birthYear;
}

console.log(person1.age(2021));



// example of built in method
let string1 = "hello world";
console.log(string1.toUpperCase());
