import fetch from "node-fetch";

const weather = async () => {
    return await (await fetch("http://api.openweathermap.org/data/2.5/weather?q=Jhenaidah&appid=263241df63fdd1b6dd713b14834fb2eb"))
                           .json();
}

try {
    console.log(await weather());
} catch(e) {
    console.log(e);
}


