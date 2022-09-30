// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Statements/const

// also we can't reassign the value again.

// declear variable with "const", we have to assign the value immediatly there.
const x = 10;

// we can't do this with "const"
// const y;
// y = 12;

try {    
        // reassign of const variable, leads to error
        x = 10;
} catch(err){
        console.log(err);
}

console.log(x);


