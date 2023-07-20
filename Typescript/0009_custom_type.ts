// https://www.digitalocean.com/community/tutorials/how-to-create-custom-types-in-typescript#prerequisites
// https://www.youtube.com/watch?v=FtmNSHvNkeM&list=PLgH5QX0i9K3rXq_1OgVmjaEJJ1akJQgPq&index=12


// definition of custom data type
// here we also decleare id as optional parameter
type Student = { studentName: string, id?: number };

// array of our custom data type "Student";
let students: Student[];
students = [];

// using custom data type for type
let student1: Student = {
  studentName: "Ashique",
  id: 21,
};

let student2: Student = {
  studentName: "Abir",
};

students.push(student1);
students.push(student2);

console.log(students);

// custom data type based on our value
type Authenticate = "YES" | "NO";

let isAutheticate: Authenticate = "YES";

function authenticationProtocol(status: Authenticate): void {
  console.log(`User authentication status : ${status}`);
}

authenticationProtocol(isAutheticate);

// indexable type
// by using this we can add as many as properties of specifiq signature
// the format is [key : typeofKeys] : typeOfValues
type Person = {
  [key : string] : any
}

let person1 : Person = {
  name : "Afif",
  age : 23,
  male : true,
}

console.log(person1);


// creating array with number of elements or more
type MergeStringsType = [string, string, ...string[]];

function MergeString (str : MergeStringsType) : string {
  let result : string = "";
  for(let i = 0; i < str.length; i++) {
    result += str[i] + " ";
  }
  return result;
}

// console.log(MergeString(['I'])) // compiler through error, as 2 argument at least needed
// 2 or more arguments needed.
console.log(MergeString(['I', 'am']));
console.log(MergeString(['I', 'am', 'a', 'good', 'boy']))

// composing type
type response = string | boolean;

let userResponse1 : response = "YES";
let userResponse2 : response = true;

console.log(userResponse1, userResponse2);


// templete string
type userData = `get${string}`;
let getName : userData = "getName";
let getId : userData = "getID";

console.log(getName, getId);
