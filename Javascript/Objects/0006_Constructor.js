// https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/object-oriented-programming/define-a-constructor-function
// https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/object-oriented-programming/use-a-constructor-to-create-objects


// constructor is the blueprint of define a object.
// It is considered good practice to name constructor functions with an upper -case first letter.


// Constructors use the keyword this to set properties of the object they will create. 
// Inside the constructor, this refers to the new object it will create. 

function Student() {
        this.name = "Poltu";
        this.age = 23;
}



// use new keyword for instantiate an Object, without new it leads to unexpected result.
const student1 = new Student();

// access to the properties.
console.log(student1.name);
console.log(student1.age);





// parameterised constructor.
function Person(first, last, age) {
        this.firstName = first;
        this.lastName = last;
        this.age = age;
        // adding new property in object constructor. 
        this.nationality = "Bangladesh";
        // adding new method in object constructor.
        this.getName = function () {
                return this.firstName + " " + this.lastName;
        }
};



// create similar type new Object using constructor
const person1 = new Person("Ahmed", "Ishan", 24);
const person2 = new Person("Zunaid", "Hasan", 24);

for (var i in person1) {
        console.log(person1[i]);
}
