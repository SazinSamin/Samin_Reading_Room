// https://stackoverflow.com/questions/21117160/what-is-export-default-in-javascript/31385145

// default export is shorthand form
// come handy when we use anonymous function
// only one defaule export could be in one module
// default export could be named or anonymous function


export default add(a, b) {
        return a * b;
}


// we can use below syntax also

/* export default add;
export function add(a, b) {
        return a * b;
}*/
