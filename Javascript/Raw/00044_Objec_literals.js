// https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/es6/write-concise-object-literal-declarations-using-object-property-shorthand

const createStudent = (name, age, gender) => ({name, age, gender});

const student1 = createStudent("Akash", 24, "Male");
console.log(student1);
