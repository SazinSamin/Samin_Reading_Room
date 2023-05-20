const arr1 = [1, 2, 3, 4];
const [one, two, three] = arr1;
console.log(one, two, three);


const arr2 = [5, 6, 7, 8];
const arr3 = [...arr1, ...arr2];
console.log(arr3);




const obj1 = {
    name: "Poltu",
    age: 21,
    occupation: "engineer"
}


const obj2 = {...obj1};
console.log(obj2);


const details = {
    address: "Manilla",
    skill: "Software"
}

const obj4 = {...obj1, ...details};
console.log(obj4);


const obj3 = {...obj1, age: 24};
console.log(obj3);
