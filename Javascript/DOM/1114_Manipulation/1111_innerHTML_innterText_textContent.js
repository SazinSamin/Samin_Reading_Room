let ele1 = document.getElementById("id");

// returns the text has written in html file
console.log(ele1.textContent);

// return the content that show in the webpage, like if we do uppercase in css, it will returned the text
// with that change

console.log(ele1.innerText);
// return html in string format
console.log(ele1.innerHTML);

// change HTML content
ele1.innerHTML = "New Data";
