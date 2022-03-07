// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Function/apply
// https://www.youtube.com/watch?v=75W8UPQ5l7k&t=2s


const arr = [2, 5, 8, 7, 9, 3];
console.log(Math.min.apply(null, arr));



// slight problem in below code.
function getMax(arg) {
    const len = arg.length;
    let min = +Infinity;
    for(let i = 0; i < len; i++) {
        if(arg[i] < min) {
            min = arg[i];
        }
    }
    return min;
}

// arr should pass alone, but to get the correct result we need send between square bracket.
const res = getMax.apply(null, [arr]);
console.log(res);
