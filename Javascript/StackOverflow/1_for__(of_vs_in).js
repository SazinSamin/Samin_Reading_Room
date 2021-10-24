// https://stackoverflow.com/questions/29285897/what-is-the-difference-between-for-in-and-for-of-statements

var list = [3, 5, 7, 9];

for(var i in list){
        console.log(i);
}
//output: 0, 1, 2, 3


console.log("\n");


for(var i of list){
        console.log(i);
}
//output: 3, 5, 7, 9
