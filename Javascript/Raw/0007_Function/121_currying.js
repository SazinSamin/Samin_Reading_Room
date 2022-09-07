function x () {
    console.log('x');
    return function () {
        console.log('y');
        return function () {
            console.log('z');
        }
    }
}

x()()();
