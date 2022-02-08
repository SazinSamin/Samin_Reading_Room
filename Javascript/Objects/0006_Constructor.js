// define construcot
// It is considered good practice to name constructor functions with an upper -case first letter.
function Person (first, last, age) {
        this.firstName = first;
        this.lastName = last;
        this.age = age;
        // adding new property in object constructor. 
        this.nationality = "Bangladesh";
        // adding new method in object constructor.
        this.getName =  function () {
                return this.firstName + " " + this.lastName;
        }
};

// create similar type new Object using constructor
const person1 = new Person("Sazin", "Samin", 24);
const person2 = new Person("Zunaid", "Hasan", 24);

for(var i in person1) {
        console.log(person1[i]);
}
