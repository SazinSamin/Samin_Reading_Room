// Destructuring assignment is assigning multple values at same time from array elements, function or others as well.
// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Destructuring_assignment


// unpacking from an array.
const array = [1, 2, 3]
const [a, b] = array;
console.log(a);
console.log(b);




// Assigning the rest of an array to a variable using spread operator
const [c, ...d] = array;
console.log(c);
console.log(d);




// unpacking from object requres same of object variable as assigning variable, otherwise through an error.
const person1 = {
        name: "Hasan",
        age: 24
};


// In array destructuring -> element destructure according to the element position in the array
// In object destructuring -> element desctructure according to the element names in the object


const {name, age} = person1;
console.log(name);
console.log(age);





// you can also assign new name to the assigning variable when do destructuring assignment from Object.
const {name: userName, age: userAge} = person1;
console.log(userName);
console.log(userAge);




// unpacking nested object
const dataBase = {
        student1: {
                name: "Green",
                age: 24,
        }
};

const {student1 : {name: sName, age: sAge}} = dataBase;
console.log(`${sName}, ${sAge}`);





// unpacking from array of objects.
const dataBase2 = [
        {
                name: "Green",
                age: 24,
        }
];
// here "student1" may be a problem
const [{ name: s1Name, age: s1Age } = student1] = dataBase2;
console.log(`${s1Name}, ${s1Age}`);

// also can be
const [{name, age}] = database;
console.log(name, age);





// unpacking specifiq elements.
const list1 = [1, 2, 3, 4, 5, 6, 7, 8, 9];
const[l1, l2, , , , l3] = list1;
console.log(`${l1}, ${l2}, ${l3}`);





// Destructuring Assignment with the Rest Parameter to Reassign Array Elements.
const source = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
function removeFirstTwo(list) {
        const [a, b, ...arr] = list;
        return arr;
}
const arr = removeFirstTwo(source);
console.log(arr);





// unpacking in function parameter.
const weather = {
        maxTemp : 24,
        minTemp : 14,
        humidity: "70%"
};



// exclusivly unpacking
const weatherReport1 = weatherInfo => {
        const {maxTemp: max, minTemp: min} = weatherInfo;
        console.log(`Temperature = max: ${max}, min: ${min}`);
} 
weatherReport1(weather);




// inclusivly unpacking as function parameter. 
const weatherReport2 = ({maxTemp: max, minTemp: min}) => {
        console.log(`Temperature = max: ${max}, min: ${min}`);
} 
weatherReport2(weather);

