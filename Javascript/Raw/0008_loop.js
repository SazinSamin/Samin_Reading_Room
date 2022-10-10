const array = [12, 34, 67, 13, 67, 76];

// normal for loop
console.log("normal loop");
for(let i=0; i<array.length; i++){
        console.log(array[i]);
}


// this for in loop i will be 0, 1, 2, 3, 4, 5
// this means how will start as zero and increment to last array element.
// it iterate over the array keys.
console.log("for in loop");
for(let keys in array){
        console.log(keys);
}

// iterate over the array elements.
console.log("for of loop");
for(let ele of array){
        console.log(ele);
}


console.log("for each loop");
// we can also use callback function for forEach loop
array.forEach((element)=>{
        console.log(element);
})


console.log("While loop");
let i = 0;
while(i < array.length){
        console.log(array[i++]);
}

console.log("Do-While loop");
i = 0;
do{
    console.log(array[i++]);
} while(i < array.length);
