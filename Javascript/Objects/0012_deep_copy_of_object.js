// // deep copy javascript object 


// https://developer.mozilla.org/en-US/docs/Glossary/Deep_copy
// https://code.tutsplus.com/articles/the-best-way-to-deep-copy-an-object-in-javascript--cms-39655

// 
const obj1 = {
    name: 'ahmed',
    age: 35,
    location: {
        city: 'Taskent',
        country: 'Uzbekistan',
    },
};

const obj1String = JSON.stringify(obj1);

const obj2 = JSON.parse(obj1String);

typeof(obj2) === 'object' ? console.log(obj2) : '';


