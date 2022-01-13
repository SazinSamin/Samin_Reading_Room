const setTIMEOUT = () => document.getElementById("demo").innerHTML = "Time";
const setINTERVAL = () => document.getElementById("demo2").innerHTML = Date();


let timeout, timeinterval;

function startExecution() {
        timeout = setTimeout(setTIMEOUT, 3000);
        timeinterval = setInterval(setINTERVAL, 1000);
}


function stopExecution() {
        if(timeout && timeinterval) {
                clearTimeout(timeout);
                clearInterval(timeinterval); 
        }
}
