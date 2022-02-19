// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/splice

// splice use to delete, replace or adding element.

// splice(start, deleteCount, item1, item2, ...);
// splice take 3 parameters, start for starting index, deleteCount is the amount of element to be
// deleted consecutively & the last on is optional, which use for adding element to the array, 
// we can add elements as much as we want by give them in comma seperated way.


const array2 = ["He", "is", "a", "not", "good", "and" , "polite", "boy"];
// splice also return the array of remove element.
const removedItems = array2.splice(3, 4);
console.log(array2);
console.log(removedItems);



// adding new elements to the array.
// we can also delete & add element in same time.
array2.splice(3, 0, "good", "and", "polite");
console.log(array2);

