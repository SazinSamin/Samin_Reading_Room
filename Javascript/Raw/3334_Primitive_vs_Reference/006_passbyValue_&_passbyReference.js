// https://www.geeksforgeeks.org/pass-by-value-and-pass-by-reference-in-javascript/
// https://codeburst.io/javascript-passing-by-value-vs-reference-explained-in-plain-english-8d00fd06a47c

// deep & shalow copy -> https://github.com/SazinSamin/Samin_Reading_Room/blob/main/Javascript/Good_Practice/1115_deep_%26_shallow_copy.js


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



// changes to any object will reflect to other object as well.

const person1 = {
    name: 'Ahmad',
    age: 24,
    location: 's korea'
};

console.log(person1);

const person2 = person1;
person2.location = 'n korea';


// after location change
console.log(person1);

