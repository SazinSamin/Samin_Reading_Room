// https://www.coursera.org/learn/javascript-basics/lecture/QRcIS/scope-in-javascript

// javscript global variable visible to everwhere, where local variable belongs to local function.
//  they are only visible to that function.

// if we comment this global variable x and try to use it to see that there is a variable with same name inside
// the function, this will produce error.
var x = 10;

function func() {
        var x = 12;
        // Carefull !!!         local variabe without var become global varibale
        y = 20;
        console.log(`Local x: ${x}`);
}

func();
console.log(`Global x: ${x}`);
console.log(`Local variable without var: ${y}`);
