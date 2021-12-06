// A JavaScript Set is a collection of unique values.
// Each value can only occur once in a Set.

const array = new Set([12, 34, 67, 13, 67, 76]);

array.forEach(function(value){
        console.log(value);
})

for(let x of array.values()){
        console.log(x);
}



// A Map holds key - value pairs where the keys can be any datatype.
// A Map remembers the original insertion order of the keys.
console.log("Map");
const fruits = new Map([
        ["BMW", 1],
        ["Marcedes", 2],
        ["Audi", 3],
])

fruits.forEach(function(key, value){
        console.log(`${key}: ${value}`);
})

// entries return iterator
for(let x of fruits.entries()){
        console.log(`${x[0]}: ${x[1]}`);
}

