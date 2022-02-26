// https://www.geeksforgeeks.org/pass-by-value-and-pass-by-reference-in-javascript/
// https://codeburst.io/javascript-passing-by-value-vs-reference-explained-in-plain-english-8d00fd06a47c


// primitive value like number, string, undefined are passed by value in Js.
// function passed as parameter also passed by value.
// Object & Array passed by reference in Js.


// here we pass an array as argument to the test() function, inside the function we have changed
// the first element, that also mutate the original array first element as well. 


const arr = [1, 2, 3, 4];
function test(newArr) {
        arr[0] = 100;
        return newArr;
}


console.log(test(arr));
console.log(arr);



