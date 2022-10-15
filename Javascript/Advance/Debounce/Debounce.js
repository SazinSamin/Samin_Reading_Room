// https://www.youtube.com/watch?v=dD9O8DnIBj4&list=PLHiZ4m8vCp9Nflbo9a0pZuLscG_Xc7DKq&index=23
// https://www.freecodecamp.org/news/javascript-debounce-example/
// https://developer.mozilla.org/en-US/docs/Web/API/setTimeout

// sometimes user accidentally click a button several time in between few seconds which is unintentional
// not button, but also text input search, where application make request to the server.
// if this happenden so frequently which is also unintentionally by user it also increase the overload of 
// server and reduce the user experience.

// To solve this issue we have to user debounce controller.

const button = document.getElementById("button");


// debounce hanlder
// request will make to server after some time, if another request come in between that time.
// first we clear the previous request and accept only the recent request.
function debounce (fn, delay) {
        let timeout;
        return function () {
                if(timeout) clearTimeout(timeout);
                timeout = setTimeout(fn, delay);
                console.log(timeout);
        }
}


button.addEventListener("click", debounce(function () {
        console.log("Clicked")
}, 1000));
