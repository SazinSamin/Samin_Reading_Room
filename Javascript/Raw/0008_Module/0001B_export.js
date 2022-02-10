// we can export let, var, const, function, class, any top level item, but not use "export" inside a function or classes.

// we can export modules all together.
export {add, subtruct, Student };

// we can also export module individual by placing the keyword in front of the items..
export const PI = 3.1416;

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

