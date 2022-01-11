// https://www.w3schools.com/js/js_htmldom_nodes.asp


let element = document.createElement("p");
let content = document.createTextNode("Dart is a excellent language");
element.appendChild(content);

let get = document.getElementById("demo");
get.appendChild(element);


let element2 = document.createElement("h1");
let content2 = document.createTextNode("Dart");
element2.appendChild(content2);


let getBefore = document.getElementById("p");
get.insertBefore(element2, getBefore);

element.remove();
// element.removeChild(child);
// element.replaceChild(element, get);
