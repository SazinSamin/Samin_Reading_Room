// // deep copy javascript object 


// https://developer.mozilla.org/en-US/docs/Glossary/Deep_copy
// https://code.tutsplus.com/articles/the-best-way-to-deep-copy-an-object-in-javascript--cms-39655



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

typeof(obj2) === 'object' ? console.log(obj2) : '';


