// Methods are functions stored as object properties.

const person1 = {
        firstName: "Sazin",
        lastName: "Samin",
        birthYear: 1999,
        
        // object method
        details: function () {
                return `Name: ${this.firstName} ${this.lastName}\n birthYear: ${this.birthYear}`;
        },
        
        // we can refer to the object by avobe style {this.property} or by refering
        // own variable by {objectName.property}. But the above one (this.property) is perfect & reusable,
        // because the {objectName.property} has a serious drawback that if the objectName has
        // changed, we have changed all the reference or objectName as well.
        
        getFirstName: function() {
                return "FirstName: " + person1.firstName;
        }
}

console.log(person1.details());
console.log(person1.getFirstName());
// without "()", the funciton defintion will return


// addition of a method
person1.age = function (currentYear) {
        return currentYear - this.birthYear;
}

console.log(person1.age(2021));



// example of built in method
let string1 = "hello world";
console.log(string1.toUpperCase());
