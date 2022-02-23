// https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/object-oriented-programming/iterate-over-all-properties


//****** this programe doesn't work correctly.

function Person (fName, lName, age) {
        this.firstName = fName;
        this.lastName = lName;
        this.age = age;
};


const p1 = new Person("Mirza", "Galib", 23);
const p2 = new Person("Alam", "Hasan", 31);

Person.prototype.location = "Dhaka";
console.log(Person.hasOwnProperty(p1.firstName));

for(let p in p1) {
        if(Person.hasOwnProperty(p)) {
                console.log(`OwnProperty: ${p}`);
        } else {
                console.log(`Prototype property: ${p}`);
        }
}

