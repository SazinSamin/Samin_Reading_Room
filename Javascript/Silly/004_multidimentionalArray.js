// mutidimentional array in JS
// https://www.programiz.com/javascript/multidimensional-array
// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/splice

let mutiDimentionalArray = [[], []];
mutiDimentionalArray[0][0] = "Sazin";
mutiDimentionalArray[0][1] = 23;

mutiDimentionalArray[1][0] = "Abeed";
mutiDimentionalArray[1][1] = 23;


mutiDimentionalArray.push(["Megh", 24]);
// add or delete element using splice
// splice(start, deleteCount, item1, item2, itemN)
mutiDimentionalArray.splice(4, 0, ["Ishaq", 24]);


for(let i of mutiDimentionalArray) {
        for(let j of i) {
                console.log(j);
        }
}

mutiDimentionalArray.pop();

