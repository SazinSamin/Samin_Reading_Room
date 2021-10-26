// Immediately Invoked Function Expression
// https://developer.mozilla.org/en-US/docs/Glossary/IIFE
// https://www.coursera.org/learn/javascript-basics/lecture/I0zbU/strategy-1-never-use-global-scope
// https://stackoverflow.com/questions/8228281/what-is-the-function-construct-in-javascript



// we can also remove the function name, that also work.
// function (){
(function dostuff(){
        var a = 10;
        var b = 20;
        console.log(a + b);
})();
