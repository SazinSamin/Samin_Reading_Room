const string1 = "Hello Hollo Hullo Hallo Hillo";


// character class let you to define a group of characters where we can match single character with multiple possibilities.
// It will be matched if a character matched from the group of characters.
// Like in between "H" and "llo" it will matched if any chatacter would be e, o and u.


// to define character class we have to use square brackets [].


const regEx = /H[eou]llo/g; // -g flag for multiple match.
const result = string1.match(regEx);
for(let i = 0; i <result.length; i++) {
        console.log(result[i])
}
