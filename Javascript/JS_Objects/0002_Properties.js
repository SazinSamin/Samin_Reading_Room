const obj1 = {
        firstName: "Sazin",
        lastName: "Samin",
        age: 24
};

// for..in loop loops over the js object property
for(let x in obj1){
        console.log(obj1[x]);
}

// adding new property to the object
obj1.occupation = "Software engineer";
console.log(obj1);

// deletation of a property
delete obj1.age;
console.log(obj1);


// nested object
const obj2 = {
        firstName: "Sazin",
        lastName: "Samin",
        age: 24,
        location:{
                homeTown: "Jhenaidah",
                Division: "Khulna"
        }
};


console.log(obj2.location.homeTown);
