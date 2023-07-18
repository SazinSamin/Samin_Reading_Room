// array of string
let userNames : string[] = ["Ashique", "Abid", "Abir"];
// array of number
let userIds : number[] = [1, 2, 3];
// array of string or number or undefined
let result : (string | number | undefined)[] = ['Pass', 1, 1, 0, 'Fail'];

// declare array in different syntax;
let roll : Array<number> = [21, 23, 24];

console.log(userNames);
console.log(userIds);
console.log(result);

// function receive array of either string or undefined
function displayUserNames (userNames: (string | undefined)[]) : void{
    console.log(userNames);
}

displayUserNames(['Mahmud', undefined, 'Poltu']);
