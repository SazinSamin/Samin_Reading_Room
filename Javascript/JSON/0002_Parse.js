// https://www.youtube.com/watch?v=iiADhChRriM

let json1 = `[
        {
                "name": "Abid",
                "Age": 23,
                "Occupation": "Student"
        },
        {
                "name" : "Malam",
                "Age": 24,
                "Occupation": "Student"
        }
]`;

// parse json to covert json to js object.
let obj1 = JSON.parse(json1);
console.log(obj1);
console.log(obj1[0].name);
console.log(obj1[1].name);

