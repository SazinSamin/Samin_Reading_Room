// a Callback function is function that send to another function as an argument.
// then we can also call that function from there.

function displayResult(res) {
        console.log(res);
}

// here we recieve a function as an argument -> "displayFunc". 
function getSum(a, b, displayFunc) {
        let result = a + b;
        // callback that receieve function from here.
        displayFunc(result);
}

// here we pass "displayResult()" function as an argument
getSum(10, 10, displayResult);
