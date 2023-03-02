// JS function are executed according to they have called, not they are defined.

function x() {
        console.log("Function X");
}

function y() {
        console.log("Function Y");
}

y();
x();
