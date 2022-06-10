const fs = require('fs');

function readHTML () {
    return new Promise((resolve, reject) => {
        fs.readFile('index.htl', (err, data) => {
            !err ? resolve(data) : reject(err);
        });
    });
}


function writeHTML (data) {
    return new Promise((resolve, reject) => {
        fs.writeFile('written.html', data, (err) =>  {
            !err ? resolve('Data has written succsessfully') : reject(err);
        });
    })
}


readHTML()
    .then(writeHTML)
    .then((res) => {
        console.log(res);
    
    })
    .catch((err) => {
    console.log(err.message);
})
