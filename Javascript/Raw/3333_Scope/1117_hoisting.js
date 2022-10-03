// https://www.youtube.com/watch?v=pT9xqCS8Vwk&list=PLHiZ4m8vCp9Nflbo9a0pZuLscG_Xc7DKq&index=6
// https://www.digitalocean.com/community/tutorials/understanding-hoisting-in-javascript


// Hoisting is (to many developers) an unknown or overlooked behavior of JavaScript.
// If a developer doesn't understand hoisting, programs may contain bugs (errors).
// To avoid bugs, always declare all variables at the beginning of every scope.
// Since this is how JavaScript interprets the code, it is always a good rule.

// JavaScript only hoists declarations, not initializations.


// to deeply understand the javascript hoisiting please go through js execution context
// https://github.com/SazinSamin/Samin_Reading_Room/blob/main/Javascript/Javascript_execution_contest.js


// Also remember hoisting works differently for "var", "let" and "const";


// for "var",
// Accutully when javascript start of or compiling it first allocate memory for the variable which decleared with "var" and set 
// those variable value "undefined". After when it execution begin it until or unless it set another value to that variable
// it print "undefined" there.



// decleration hoisting
console.log(a); // this line will print "undefined";
var a;
a = 1;


// variable decleared inside the function hoisting inside the function also, it doesn't hoist outside the function.
var food1 = 'apple';
var food2 = 'mango';

// as we know "var" is function scoped so when js compiling it found var decleared variable inside the if block
// and hoist it in the top of the function or set that time value undefined to that variable.
// so when js enter the execution mode, it found "food1" value as undefined so it go to the if block and set "food2" value
// to "food1".
// for hoisting we can get unpredictable vahaviour from "var" defined variable
function chooseFood() {
        // var food1 = undefined;
        if(!food1) {
                var food1 = food2;
        }
        return food1;
}

console.log(chooseFood());






// for "let", const and let hoist in a same way
// js hoisting let decleared variable also but it doesn't set any value that time. It set let variable value on that line
// the let decleared to "undefined".

// console.log(c); // leads to ReferenceError
let c; // here js set the let variable value as "undefined"
console.log(c) 



let viachle1 = 'car';
let viachle2 =  'bus';
// as let is block scope so it won't hoist outside it block, that why it's doesn't make
// that "var" decleared varibale type unpredictable behaviour.
function chooseViachle() {
        if (!viachle1) {
                // let viachle1; // let will hoist here
                let viachle1 = viachle2;
        }
        return viachle1;
}

console.log(chooseViachle());


// here because of hoisting normally we expect to print the value undefined, we get 
// actullay "Science"
// because of hoisting that "subject" variable hoist to the top of the function, so when in execution phase 
// js found "subject = Science" it just set the variable value, not making that variable global.
function foo() {
        subject = "Science";
        var subject;
        console.log(subject);
}
foo();


// for storing function in variable is different from normal function behaviour.
// the "myFoo" variable hoist in the top, but we know undefine set in let and const in that line where that variable 
// has decleared.

myFoo(); // this function calling doesn't work, because js just hoist it, not refer to any value.
const myFoo = () => {
        console.log("myFoo is working")
}
