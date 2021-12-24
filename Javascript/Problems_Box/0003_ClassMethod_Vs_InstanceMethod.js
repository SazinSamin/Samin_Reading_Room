// as we know there have "class method" & "instance method" in other language
// but I have got both same in JS, 
// as we get getFullYear() method in both cases.

// date instance
let dateInstance = new Date();

// getFullYear() method from instance.
let date1 = dateInstance.getFullYear();
// getFullYear() method from direct class
let date2 = new Date().getFullYear();

// both produce same result
console.log(date1);
console.log(date2);
