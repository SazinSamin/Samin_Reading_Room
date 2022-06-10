const fs = require('fs');
const { resolve } = require('path');

const readHTML = new Promise((resolved, rejected) => {
    fs.readFile('index.html', 'utf-8', (err, data) => {
        (!err) ? resolved(data) : rejected(err);
    });
});


readHTML.then((msg) => {
    console.log(msg);
}).catch((err) => {
    console.log(err);
})
