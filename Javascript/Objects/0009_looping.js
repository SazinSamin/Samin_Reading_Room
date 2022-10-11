// https://stackoverflow.com/questions/8312459/iterate-through-object-properties?rq=1


// we can loop through the object using iterator also
// https://github.com/SazinSamin/Samin_Reading_Room/tree/main/Javascript/Advance/Iterator



let obj1 = {
        name: "Abid",
        age: 23,
        Car: ["Ford", "Ferari", "Marcedes"],
        Occupation: { "title": "Student", "Status": "True" }
};

// for..in loop isn't ensure order in times of looping, for that it is not safe for adding, removing or updating a properties or values.
console.log("\nfor..in")
for (let x in obj1) {
        console.log(`${x}: ${obj1[x]}`);
}

console.log("\nfor..in");
for (let y in obj1.Car) {
        console.log(obj1.Car[y]);
}

console.log("\nforEach");
Object.keys(obj1).forEach((e) => {
        console.log(`${e}: ${obj1[e]}`);
})
// Object.keys(obj1) ;


console.log("\nforEach");
Object.entries(obj1).forEach(([key, value]) => {
        console.log(`${key}: ${value}}`);
})

console.log("\nfor loop");
for(const [key, value] of Object.entries(obj1)) {
        console.log(`${key}: ${value}}`);
}




