const fs = require('fs');

function readHTML () {
    return new Promise((resolve, reject) => {
        fs.readFile('index.html', (err, data) => {
            !err ? resolve(data) : reject(err);
        });
    });
}


async function asyncOperation () {
    const data = await readHTML();
    console.log(data.toString());
}

asyncOperation();
