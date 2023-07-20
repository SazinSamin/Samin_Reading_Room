// https://www.typescriptlang.org/docs/handbook/2/objects.html

// define types for object properties
// "?" for optional properties
let student1: { name: string; id?: number };
student1 = {
  name: "Ashique",
  id: 22,
};

console.log(student1);

// another type of decleration, here we decleare student2 as "object" type
let student2 : object;
student2 = {
  name : "Abir",
  id : 21
}

console.log(student2);

// decleartion of "object array"
let students : object[];
students = [];

students.push(student1);
students.push(student2);

console.log(students);
