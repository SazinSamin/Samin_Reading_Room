// https://www.w3schools.com/js/js_htmldom_nodes.asp


let element = document.createElement("p");
let content = document.createTextNode("Dart is a excellent language");
// appenChild insert element at the last.
element.appendChild(content);

let get = document.getElementById("demo");
get.appendChild(element);


let element2 = document.createElement("h1");
let content2 = document.createTextNode("Dart");
element2.appendChild(content2);


let getBefore = document.getElementById("p");
// it take two arguments what have to insert, and before what
get.insertBefore(element2, getBefore);

// append also insert element at the last, but it can take multiple input, also it can take and insert normal text.
get.append(element2, "Assalamu Alaikum");


element.remove();
// element.removeChild(child);
// element.replaceChild(element, get);
