// var has function scope, if we decleared it any global object like window object for browser
// then it would avaiable to the all functions or statement below it.


// declear a variable with "var", can have access to all of the code below it.
var x = 10;
console.log(x);


function foo () {
        // declear of same name variable with "var", it has access only inside the function
        // this function also have access to upper "x" variable but as we decleared it again 
        // now this function only obey the value which decleared inside the function.
        var x = 12;
        console.log(x);
}

foo()
// You see the "x" variable decleared inside the foo function again but it won't print 12, instead it 
// print 10 because "var" variable inside function only has function scopes.
console.log(x);




// difference between "var" & "let" is "var" have function scope, on the other hand "let" has only
// block scope.

// here decleared variable with "var" have also access outside this block
if(true) {
        var a = 100;
        console.log(a);
}
console.log(a);

// here decleared variable with "let" don't have also access outside this block
if(true) {
        let b = 120;
        console.log(b);
}
// console.log(b); // this will leads to error, because it doens't have access to the "let" variable which is block scope 



// const also doesn't have access outside the block scope
if(true) {
        const c = 130;
        console.log(c);
}
// console.log(c); // leads to error



// declear variable with "const", we have to assign the value immediatly there.
// also we can't reassign the value again.
const d = 10;
d = 20; // this leads to error

