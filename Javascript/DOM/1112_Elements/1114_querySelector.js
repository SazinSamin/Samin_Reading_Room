// return the first element match with the search

// One thing have to remember always about QuerySelector that
// it always use the CSS syntax.
// like for class it use first dot(.) and for id have to give #(hash) at first like css.

var getElement1 = document.querySelector('#article_1');
getElement1.style.color = "green";

var getElement2 = document.querySelector('.fruits');

// multiple selection at once
var getElement3 = document.querySelector('#article_1 .info1');

