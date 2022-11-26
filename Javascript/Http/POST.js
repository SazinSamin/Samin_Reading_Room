// send post request -> https://stackoverflow.com/a/47065313/10928027


const url = "http://localhost:3000";
        fetch(url, {
                method: "POST",
                headers: {'Content-Type': 'application/json'},
                body: data,
        }).then(res => {
                console.log('Reqest send ' + res);
        });
