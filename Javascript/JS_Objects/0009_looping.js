let obj1 = {
        name: "Abid",
        age: 23,
        Car: ["Ford", "Ferari", "Marcedes"],
        Occupation : {"title":"Student", "Status": "True"}
};

for(let x in obj1) {
        console.log(`${x}: ${obj1[x]}`);
}
