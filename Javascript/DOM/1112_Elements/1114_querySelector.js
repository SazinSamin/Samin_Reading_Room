// return the first element match with the search
// if there is mulitple item in one condition, like same name multiple class
// then it return the first match
// Also like there we have put to select last item of any item list, so if there are multiple items as last items, then it return
// the first siblings

// One thing have to remember always about QuerySelector that
// it always use the CSS syntax.
// like for class it use first dot(.) and for id have to give #(hash) at first like css.

var getElement1 = document.querySelector('#article_1');
getElement1.style.color = "green";

var getElement2 = document.querySelector('.fruits');

// multiple selection at once
var getElement3 = document.querySelector('#article_1 .info1');




// select specitfiq from querySelector
// below lines code doesn't work properly
let selectItem = document.querySelector('.fruitsList:last-child');
let selectItem = document.querySelector('.fruitsList:nth-child(2)');
console.log(selectItem);
