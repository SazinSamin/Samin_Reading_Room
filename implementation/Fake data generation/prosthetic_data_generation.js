import fetch from "node-fetch";

// let i = 0;

function getRndInteger(min, max) {
        return Math.floor(Math.random() * (max - min)) + min;
}



const generateData = () => {
        const temperature = getRndInteger(97, 99);
        const pulse = getRndInteger(70, 86);
        const oxygen = getRndInteger(94, 99);


        let data = {
                "temperature": temperature,
                "pulse": pulse,
                "oxygen": oxygen
        };

        const jsonData = JSON.stringify(data);

        const sendData = () => {
                console.log(jsonData);
                
                fetch("http://localhost:3000", {
                        method: "POST",
                        headers: { 'Content-Type': 'application/json' },
                        body: jsonData,
                }).then(res => {
                        console.log("Request complete! response:", res['status']);
                });
                
        }
        // i >= (charge.length - 1) ? i = 0 : i++;
        sendData();
        setTimeout(generateData, 5000);
}

generateData();
