// https://www.differencebetween.com/difference-between-declarative-and-vs-imperative-programming/
// https://dev.to/ruizb/declarative-vs-imperative-4a7l#:~:text=Declarative%20programming%20is%20a%20paradigm,which%20mutate%20the%20program's%20state.
// https://stackoverflow.com/questions/1784664/what-is-the-difference-between-declarative-and-imperative-paradigm-in-programmin




// imperative way
// in this way we have explicitly tell how to double our given array elements.
// we are more corcern over how, and more control over programe flow.
const arr = [1, 2, 3, 4, 5];
function makeDouble1(arr) {
        const res = [];
        for(let i = 0; i < arr.length; i++) {
                res.push(arr[i] * 2);
        }
        return res;
}

console.log(makeDouble1(arr));



// declerative way
// we just given multiply the array elements and get the doubled elements array
// we don't have to corcern about how internally our code works.
const res2 = arr.map(ele => ele * 2);
console.log(res2);






// another example

// imperative pattern style
function vat1(price, tax) {
        return price + (price * tax);
}

const v1 = vat1(100, .1);
const v2 = vat1(200, .1);
const v3 = vat1(300, .1);
console.log(v1, v2, v3);

// but using currying we can do declearative pattern style
function vat2(tax) {
        return function (price) {
                return price + (price * tax);
        }
}

const taxRate = vat2(.1); // look this one is partial function, because here we use partial portion of the total function
const v4 = taxRate(100);
const v5 = taxRate(200);
const v6 = taxRate(300);
console.log(v4, v5, v6);
