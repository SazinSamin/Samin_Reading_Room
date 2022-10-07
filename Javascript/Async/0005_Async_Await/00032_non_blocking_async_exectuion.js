import fetch from "node-fetch";


// async and await is like promise and then. async corresponding to promise and await correspond to then.

const weather = async () => {
        const x =  await fetch('https://virusbase.herokuapp.com');
        const y = await x.json();
        console.log(y);
}

weather();

for (let i = 0; i <= 50; i++) {
        console.log(i);
}
console.log('Finished');



// with then example
/*
weather().then(msg => {
        console.log(msg);
}).catch(e => {
        console.log(e);
})
*/
