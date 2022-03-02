// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/String/Trim

const string = "        The earth moves around the sun.                 ";

// trim() remove whitespace (space, tab, no-break space) from the start & end of the string.
// It return a new string & doesn't mutate the original one.
const res1 = string.trim();
console.log(res1);


// trimStart() for only remove whitespace from the begining.
// trimLeft() is the alias of trimeStart().
const res2 = string.trimStart();
// trimStart() for only remove whitespace from the ending.
// trimRight() is the alias of trimEnd().
const res3 = string.trimEnd();

console.log(res2);
console.log(res3);
