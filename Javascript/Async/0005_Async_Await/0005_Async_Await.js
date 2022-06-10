import fetch from "node-fetch";

const weather = async () => {
    const rawdata = await (await fetch("http://api.openweathermap.org/data/2.5/weather?q=Jhenaidah&appid=263241df63fdd1b6dd713b14834fb2eb"))
                           .json();
    console.log(rawdata);
}

try {
    weather();
} catch(e) {
    console.log(e);
}





