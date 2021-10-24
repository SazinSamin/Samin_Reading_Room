// remember getElementsByTagName or getElementsByClassName which return collection of tags or classes
// that must be access like array element, direct access doesn't reflect at all
// https://www.coursera.org/learn/javascript-basics/lecture/syPgb/dom-getelementsbyclassname


var pg = document.getElementsByTagName('p');

for(var i = 0; i < pg.length; i++){
        pg[i].style.color = "red";
        alert(`Alert: ${i}`);
}
