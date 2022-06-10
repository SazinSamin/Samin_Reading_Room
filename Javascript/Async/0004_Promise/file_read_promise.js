const fs = require('fs');

const readHTML = new Promise((resove, rejected) => {
    fs.readFile('text.html','utf-8', (err, data) => {
        err ? rejected(err) : resove(data);
    });
});


readHTML.then((res) => {
    console.log(res);
}).catch((err) => {
    console.log(err);
})
