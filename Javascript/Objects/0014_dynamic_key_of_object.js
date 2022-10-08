// https://mreigen.medium.com/es6-dynamic-key-name-for-object-object-property-assignment-55f8cc84d97b

const key1 = 'model';
const key2 = 'man_year';


// if we want to assign dynamic key in js object, we have to use square bracket in that keys.
// the keys name resolve to that variable values.

const obj1 = {
        name: "Marcedes",
        [key1]: "class E", 
        [key2]: "2022",
}

console.log(obj1); // { name: 'Marcedes', model: 'class E', man_year: '2022' }
