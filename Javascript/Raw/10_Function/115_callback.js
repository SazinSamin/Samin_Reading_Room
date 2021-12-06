const array = [12, 34, 67, 13, 67, 76];

// callback function
const array2 = array.filter(getEven);
function getEven(value){
        return ((value % 2) == 0);
}


function printValue(value){
        console.log(value);
}

array2.forEach(printValue);
