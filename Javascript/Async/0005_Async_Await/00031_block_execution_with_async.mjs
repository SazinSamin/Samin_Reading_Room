import fetch from "node-fetch";


// The asynchronous operation means the result will  come later.
// if we want to block the other operation until the asynchronous operation result comes
// then we can define a function with async, await and call the function.
// when we call the function it will be synchronous as normal function is synchronous
// so until the result of async doesn't come, it won't go to the next statement.

// but remember inside a asynchronous function all statement aren't executed synchronously.

const weather = async () => {
        return await (await fetch('https://virusbase.herokuapp.com'))
                .json();
}

console.log(await weather());
for(let i = 0; i <= 50000; i++) {
        console.log(i);
}
console.log('Finished');
