const add = function () {
        let counter = 0;
        return function () { counter += 1; return counter }
};

// this will execute the parent function every time, then the return function,
// so, it will not act as a closure.
add()();
add()();
console.log(add()());
