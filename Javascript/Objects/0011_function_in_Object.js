// https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/es6/write-concise-declarative-functions-with-es6

// before ES6 function inside a object was
const student1 = {
        name: "Green",
        age: 24,
        activity: function() {
                return `${this.name} is very active`;
        }
}

// But now in ES6 we have shorthand style
const student2 = {
        name: "Blue",
        age: 24,
        activity () {
                return `${this.name} is very active`;
        }
}

