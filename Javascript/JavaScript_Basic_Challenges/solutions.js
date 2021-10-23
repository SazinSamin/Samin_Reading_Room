// Challenge 1
// Create an HTML file and set the title to
// "JavaScript Basic Challenges: Challenge 1"
// Then add an < h1 > and < h2 > with that
// information.
// Then add a script tag before the closing
// </body > tag and between the script tags
// create two variables.Assign your first name to
// one and your last name to the other, then
// make JavaScript display the value of each
// variable in the console.


var firstName = "Sazin";
var lastName = "Samin";
console.log(firstName);
console.log(lastName);



// Challenge 2
// Change the title and the headings on the
// challenge1.html file and save it as
//         challenge2.html.
// Use plus signs(+) and your two variables to
// write your first name and last name to the
// console on one line with a space between
// your names



var firstName = "Sazin";
var lastName = "Samin";
console.log(firstName + " " + lastName);



// Challenge 3

// Add one more variable called "adjective" and
// assign it a value that describes you.Use the
// console to display a sentence that includes all
// three variables.This time use a template
// literal(tick marks, and ${} around variables).



var firstName = "Sazin";
var lastName = "Samin";
var adjective = "progammer"
console.log(`${firstName} ${lastName} is a very good ${adjective}`);












// Challenge 4  

// In JavaScript, prompt() can be used like this:
// var name = prompt("what's your name?", "Bob");
// When the page loads a prompt will appear and the
// user can add some text. "Bob" is the default text.If you
// don't want default text, you can leave the second set of
// quotes empty.
// Write script that prompts the user for their name, and
// then display a sentence in the console that greets the
// user by name and welcomes them.

var myname = prompt("What's you name ? ", "Apon");
console.log(`Hello ${myname} and welcom`);



// Challenge 5

// This time, use prompt and ask the user for a
// whole number.If they type in a number less
// than 10, have the console log report, "You
// entered a number smaller than 10",
// otherwise, send "You entered a big number"
// to the console
var num = prompt("Enter a whole number: ");
if(num < 10){
        console.log("You have entered a number smaller than 10");
}else{
        console.log("You entered a big number");
}





// Challenge 6

// Notice in challenge 5, if a user types
// something other than a number, the console
// tells us they entered a big number.In this
// challenge, fix that so that if a user types
// something other than a number, the console
// displays a message that says there was an
// error.


var num = prompt("Enter a whole number: ");
if(num < 10){
        console.log("You have entered a number smaller than 10");
}else if(num > 9){
        console.log("You entered a big number");
}else {
        console.log("ERROR: You didn't enter a number");
}






// Challenge 7

// For this challenge, if the user types a number
// less than 10, use a loop to print out the
// numbers from zero to 9 in the console.



var num = prompt("Enter a whole number: ");

if (num < 10) {
        for (var i = 0; i < 10; i++) {
                        console.log(`Here is a ${i}`);
        }
} else if (num > 9) {
        console.log("You entered a big number");
} else {
        console.log("ERROR: You didn't enter a number");
}









// Challenge 8

// For this challenge, if the user types a number
// less than 10, update the loop from the last
// challenge so that the console indicates the
// number the user entered.

var num = prompt("Enter a whole number: ");

if (num < 10) {
        console.log("You have entered a number smaller than 10");
        for(var i = 0; i < 10; i++){
                if(num == i){
                        console.log(`Here is a ${i} <-- this is your number!`);
                }else{
                        console.log(`Here is a ${i}`);
                }
        }
} else if (num > 9) {
        console.log("You entered a big number");
} else {
        console.log("ERROR: You didn't enter a number");
}





// Bonus Challenge
// Prompt the user for a color, then have the
// console report if the user typed a primary color
//         (red, blue, or yellow) or a secondary color
//                 (orange, green or purple) or none of these.
// Handle the situation for both uppercase and
// lowercase letters in the color the user types in.
//         Hint: remember the || means 'or


var userColor = prompt("Type a color: ");

var primaryColor = ["red", "blue", "yellow"];
var secondaryColor = ["orange", "green", "purple"];

if(userColor == primaryColor[0] || userColor == primaryColor[1] || userColor == primaryColor[2]){
        console.log(`You picked a primary color: ${userColor}`);
} else if(userColor == secondaryColor[0] || userColor == secondaryColor[1] || userColor == secondaryColor[2]){
        console.log(`You picked a secondary color: ${userColor}`);
}else{
        console.log("You picked none of color");
}




