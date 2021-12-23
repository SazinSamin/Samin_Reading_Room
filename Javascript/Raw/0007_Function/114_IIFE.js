// Immediately Invoked Function Expression
// https://developer.mozilla.org/en-US/docs/Glossary/IIFE
// https://www.coursera.org/learn/javascript-basics/lecture/I0zbU/strategy-1-never-use-global-scope
// https://stackoverflow.com/questions/8228281/what-is-the-function-construct-in-javascript



// You cannot self-invoke a function declaration.
// You have to add parentheses around the function to indicate that it is a function expression:
// function (){
(function dostuff(){
        var a = 10;
        var b = 20;
        console.log(a + b);
})();


// we can also remove the function name, that also work.
(function () {
        console.log("Welcom to Javascript");
})();




