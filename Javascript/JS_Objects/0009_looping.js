let obj1 = {
        name: "Abid",
        age: 23,
        Car: ["Ford", "Ferari", "Marcedes"],
        Occupation : {"title":"Student", "Status": "True"}
};

// for..in loop isn't ensure order in times of looping, for that it is not safe for adding, removing or updating a properties or values.
for(let x in obj1) {
        console.log(`${x}: ${obj1[x]}`);
}

for(let y in obj1.Car) {
        console.log(obj1.Car[y]);
}
