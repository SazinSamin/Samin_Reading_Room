// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Statements/const

// declear variable with "const", we have to assign the value immediatly there.
// also we can't reassign the value again.




const x = 10;

try{
        x = 10;
}catch(err){
        console.log(err);
}

console.log(x);

// we can't do this with "const"
// const y;
// y = 12;
