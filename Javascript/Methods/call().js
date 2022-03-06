// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Function/call


// The call() allows for a function/method belonging to one object to be assigned and called for a different object
// we can use call method to call a function on a object.

function Person(fName, lName) {
    this.firstName = fName;
    this.lastName = lName;
}

const p1 = new Person("Muhib", 24);

function getSum(id) {
    console.log(`Name: ${this.firstName}, Age: ${this.lastName}, Id: ${id}`);
}

getSum.call(p1, 56);



// Using call to chain constructors for an object
function student(name, age) {
    this.name = name;
    this.age = age;
}

function createStudentObj(name, age, id) {
    student.call(this, name, age);
    this.id = id;
}

const s1 = new createStudentObj("Muhib", 25, 57);
console.log(s1);

