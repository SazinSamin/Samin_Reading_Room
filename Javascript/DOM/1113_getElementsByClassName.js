// remember getElementsByTagName or getElementsByClassName which return collection of tags or classes
// that must be access like array element, direct access doesn't reflect at all
// https://www.coursera.org/learn/javascript-basics/lecture/syPgb/dom-getelementsbyclassname


var info = document.getElementsByClassName('info1');
for(var i=0; i<info.length; i++){
        info[i].style.color = "blue";
}
