// // deep copy javascript object 


// https://developer.mozilla.org/en-US/docs/Glossary/Deep_copy
// https://code.tutsplus.com/articles/the-best-way-to-deep-copy-an-object-in-javascript--cms-39655



// copy using spread operator ***[can't copy nested function]
const obj3 = {
    name: 'hasan',
    age: 22,
};

const obj4 = {...obj3};
console.log(obj4);



// copy using JSON.stringify() ***[can't copy function]
// object construction
const obj1 = {
    name: 'ahmed',
    age: 35,
    location: {
        city: 'Taskent',
        country: 'Uzbekistan',
    },
};


// convert object to string
const obj1String = JSON.stringify(obj1);

// return to object from the string
const obj2 = JSON.parse(obj1String);

typeof (obj2) === 'object' ? console.log(obj2) : '';





// for deep copy of an object use "lodash"

import _ from 'lodash';

let objA = {
        indentity: "person",
        catagory: 'student',
        display : function () {
                console.log(`${this.indentity}, ${this.catagory}`);
        }
};

let objB = _.cloneDeep(objA);

console.log(objB);
objB.display();


