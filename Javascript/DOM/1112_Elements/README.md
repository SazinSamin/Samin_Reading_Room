select the class from specifiq ID  
from selected ID we can also select Class name there.  
It possible because of prototype of Javascript where child class have access to the parent class properties and methods.
So that we can do apply any methods to any elements.

    let selectID = document.getElementById('fruits');  
    let selectClass = selectID.getElementsByClassName('fuitsList');  
