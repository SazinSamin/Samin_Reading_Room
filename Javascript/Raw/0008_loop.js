const array = [12, 34, 67, 13, 67, 76];

// normal for loop
console.log("normal loop");
for(let i=0; i<array.length; i++){
        console.log(array[i]);
}


// this for in loop i will be 0, 1, 2, 3, 4, 5
// this means how will start as zero and increment to last array element.
// so to access the data of the loop we have to use array[i].
console.log("for in loop");
for(let i in array){
        console.log(array[i]);
}

// but this for of loop will return the array data directly.
// in this case like 12, 34, 67... we don't need to use the array name here.
console.log("for of loop");
for(let j of array){
        console.log(j);
}


console.log("for each loop");
// we can also use callback function for forEach loop
array.forEach((element)=>{
        console.log(element);
})
