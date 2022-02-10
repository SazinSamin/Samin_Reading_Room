export { add, subtruct, Student };

class Student {
        constructor(name, age, cgpa) {
                this._name = name;
                this._age = age;
                this._cgpa = cgpa;
        }

        display () {
                console.log(`${this._name}, ${this._age}, ${this._cgpa}`);
        }

}

const add = (a, b) => a + b;
const subtruct = (a, b) => a - b;
