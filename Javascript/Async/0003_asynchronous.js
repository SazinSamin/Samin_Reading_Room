// https://www.w3schools.com/js/js_asynchronous.asp
// Functions running in parallel with other functions are called asynchronous


setTimeout(function() {
        console.log("This is Sazin Reshed Samin");
}, 3000);




setInterval(myFunc, 1000);
function myFunc() {
        let d = new Date();
        let time = `${d.getHours()}:${d.getMinutes()}:${d.getSeconds()}`;
        console.log(time);
        document.getElementById("demo").innerHTML = time;
}


