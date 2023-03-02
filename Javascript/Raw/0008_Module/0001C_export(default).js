// https://stackoverflow.com/questions/21117160/what-is-export-default-in-javascript/31385145

// default export is shorthand form
// come handy when we use anonymous function
// only one default export could be in one module
// default export could be named or anonymous function

// const pi =  3.1416;
// export default pi;

export default add(a, b) {
        return a * b;
}


// we can use below syntax also

/* export default add;
export function add(a, b) {
        return a * b;
}*/
