// One thing have to remember always about QuerySelector that
// it always use the CSS syntax.

// as the querySelectorAll return array of elements, so we have to access those elements like array using loop
// or individual key like getElement[1].

var getElement = document.querySelectorAll('p');
for(var i=0; i<getElement.length; i++){
        getElement[i].style.color = "blue";
}
