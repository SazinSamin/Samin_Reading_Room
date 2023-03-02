// https://developer.mozilla.org/en-US/docs/Glossary/Callback_function
// A callback function is a function passed into another function as an argument, 
// which is then invoked inside the outer function to complete some kind of routine or action.


function askUserName(){
        return prompt("What is your name: ");
}

// receive function as argument
function greeting(username){
        console.log(`Congratulation ${username()}`);
}

// pass function as argument
greeting(askUserName);
