const set1 = new Set([1, 2, 3, 4, 4, 1, 3, 5, 6, 9, 2, 9]);
// Callback function...
set1.forEach((value) => console.log(value));

set1.add(100);


// "values()" return a iterable  object containing all values in a Set.
const set1Iterator = set1.values();
for(let i of set1Iterator){
        console.log(i);
}


/*
Method	Description
new Set()	Creates a new Set
add()	Adds a new element to the Set
delete ()	Removes an element from a Set
has()	Returns true if a value exists
clear()	Removes all elements from a Set
forEach()	Invokes a callback for each element
values()	Returns an Iterator with all the values in a Set
keys()	Same as values()
entries()	Returns an Iterator with the[value, value] pairs from a Set
Property	Description
size	Returns the number elements in a Set
*/
