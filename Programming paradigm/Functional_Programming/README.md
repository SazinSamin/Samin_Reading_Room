// everything is in js is an object, function also a object, but it is special type of object.  
function foo () {  
        console.log('I am function');  
}  

// here you can see that as function is a object so we add property to that object like in normal object we do
foo.name = 'function name is foo';  
console.log(foo.name);   


[7 Functional Programming Techniques for JavaScript Developers](https://www.syncfusion.com/blogs/post/7-functional-programming-techniques-for-javascript-developers.aspx)  
[Purely_functional_data_structure](https://en.wikipedia.org/wiki/Purely_functional_data_structure)  
Recall that in functional programming, changing or altering things is called mutation, and the outcome is called a side effect. A function, ideally, should be a pure function, meaning that it does not cause any side effects.






Don't alter a variable or object - create new variables and objects and return them if need be from a function. Hint: using something like const newArr = arrVar, where arrVar is an array will simply create a reference to the existing variable and not a copy. So changing a value in newArr would change the value in arrVar.

Declare function parameters - any computation inside a function depends only on the arguments passed to the function, and not on any global object or variable.
