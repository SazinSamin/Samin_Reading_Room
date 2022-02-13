// https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/regular-expressions/specify-upper-and-lower-number-of-matches
// specify the number of matches of a characters.
// we can set the upper and lower bound of the number of matches too.
// Like we have an array named array, here the Telo have different numbers of ll.
// ranging from 1 to 6. but in regEx we have specified that givent those Telo whose have
// 3 to 5 l. So, the 3,4,5 elements of array word statisfy the condition and return the word
// back but the other failed, return null. 
// use  curly braces {} and put the upper & lower limit inside that for Quantity Specifier.




const array = ["Telo", "Tello", "Telllo", "Tellllo", "Telllllo", "Tellllllo"];
// here we specify l should be 3 to 5 times.
const regEx = /Tel{3,5}o/;

array.forEach(ele => {
        console.log(`${ele} = ${ele.match(regEx)}`);
});





// we also can set the just the lower limit by specify the lower limit in curly braces and keep
// upper limit as blank.
const regExUpperLimit = /Tel{3,}o/;
array.forEach(ele => {
        console.log(`${ele} = ${ele.match(regExUpperLimit)}`);
});


// I can't know how to set only the upper limit.
/*
const regExLowerLimit = /Tel{,3}o/;
array.forEach(ele => {
        console.log(`${ele} = ${ele.match(regExLowerLimit)}`);
});
*/




// set the exact numbers of characters match.
const regExExact = /Tel{3}o/;
array.forEach(ele => {
        console.log(`${ele} = ${ele.match(regExExact)}`);
});
