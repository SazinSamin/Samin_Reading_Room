let obj1 = {
        name: "Abid",
        age: 23,
        Car: ["Ford", "Ferari", "Marcedes"],
        Occupation : {"title":"Student", "Status": "True"}
};

for(let x in obj1) {
        console.log(`${x}: ${obj1[x]}`);
}

for(let y in obj1.Car) {
        console.log(obj1.Car[y]);
}
