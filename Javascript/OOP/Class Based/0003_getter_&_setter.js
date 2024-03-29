// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Functions/set

class Person {
        constructor(name, birthYear) {
                this._firstName = name;
                this._birthYear = birthYear;
                this._currentYear;
        }

        // setter
        // setter can take only one parameter
        set setCurrentYear(val) {
                this._currentYear = val;
        }

        // getter
        get details() {
                return `${this._firstName}, ${this._currentYear - this._birthYear}`;
        }
}

const p1 = new Person("Sazin", 1998);
p1.setCurrentYear = 2021;
console.log(p1.details);
