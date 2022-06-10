// https://www.youtube.com/watch?v=DHvZLI7Db8E

// promise take two arguments,here resolve as success case, rejected as error case
const p = new Promise((resove, rejected) => {
        const a = 1;
        if (a) {
                resove("Success");
        } else {
                rejected("Failed");
        }
});

// then for success, catch for error
p.then((message) => {
        console.log(message);      
}).catch((message) => {
        console.log(message);
});
