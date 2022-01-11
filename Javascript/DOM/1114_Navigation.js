// https://www.w3schools.com/js/js_htmldom_navigation.asp

let demo = document.getElementById("demo");
let parent = demo.parentNode;
let child = demo.children;
let firstChild = demo.firstChild;
let lastChild = demo.lastChild;
let nextSibling = demo.nextSibling;
let prevSibling = demo.previousSibling;


const array = [demo, parent, child, firstChild, lastChild, nextSibling, prevSibling];
for(let i = 0; i < array.length; i++) {
        console.log(array[i]);
}

let a1 = document.getElementById("demo")
console.log(a1.innerHTML);
console.log(a1.firstChild.nodeValue);
