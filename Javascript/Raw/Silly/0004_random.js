// https://www.w3schools.com/js/js_random.asp

// as js random function return a value between 0 to 1 so, 
// we need multiply with number which gives a large random value.
// then we use floor function for get a integer.


console.log("10 random numbers: ");
for(let i = 0; i < 10; i++){
        console.log(Math.floor(Math.random() * 100));
}
