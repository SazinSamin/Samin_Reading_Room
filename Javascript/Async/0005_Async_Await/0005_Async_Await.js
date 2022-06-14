import fetch from "node-fetch";

const weatherData = async () => {
    return await (await fetch("http://api.openweathermap.org/data/2.5/weather?q=Jhenaidah&appid=263241df63fdd1b6dd713b14834fb2eb"))
                           .json();
}

try {
    console.log(await weatherData());
} catch(e) {
    console.trace(e);
}





