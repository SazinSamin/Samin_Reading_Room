import fetch from "node-fetch";


const weather = async () => {
        return  (await fetch('https://virusbase.herokuapp.com')).json();
}

weather().then(msg => {
        console.log(msg);
}).catch(e => {
        console.log(e);
})


for (let i = 0; i <= 50; i++) {
        console.log(i);
}
console.log('Finished');
