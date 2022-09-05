// https://www.freecodecamp.org/news/javascript-coding-interview-practice/

// problem statement

// Main Question: Get the passengers' names using the data provided 
// Bonus Part (a)- Return vegetarians/vegans
// Bonus Part (b)- Sort passengers by the number of connected flights in descending order


const { fileLoader } = require("ejs");

const passengers = [
        {
                id: 1,
                passengerName: "Freddie Mercury",
                isVegetarianOrVegan: false,
                connectedFlights: 2,
        },
        {
                id: 3,
                passengerName: "Michael Jackson",
                isVegetarianOrVegan: true,
                connectedFlights: 1,
        },
        {
                id: 2,
                passengerName: "Amy Winehouse",
                isVegetarianOrVegan: true,
                connectedFlights: 4,
        },
        {
                id: 3,
                passengerName: "Kurt Cobain",   
                isVegetarianOrVegan: true,
                connectedFlights: 3,
        },
        
];


// solution
const arr = passengers.filter(f => f.isVegetarianOrVegan)
                        .sort((a, b) => b.connectedFlights - a.connectedFlights)
                        .map(m => m.passengerName);

console.log(arr);

