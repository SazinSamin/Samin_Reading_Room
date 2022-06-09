const http = require('http');
const fs = require('fs');



const host = '127.0.0.1';
const port = 3000;

// load the html file.
let indexHTML;
fs.readFile('index.html', (err, data) =>  {
    !err ? indexHTML = data : console.log(err);
})


// return response
const requestListener = (req, res) => {
    res.setHeader('Content-Type', 'text/html');
    res.writeHeader(200);
    res.end(indexHTML);
}

// server creation.
const server = http.createServer(requestListener);
// start listening on server.
server.listen(port, host, () => {
    console.log(`Server is running... on -> http://${host}:${port}`);
})
