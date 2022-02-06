function randomFraction() {
        const testArray = [];
        for(let i = 0; i < 100; i++) {
                console.log(parseInt(Math.random() * 10));
        }
}


// get a random whole number between a range
function getRandom(max, min) {
        return Math.floor(Math.random() * (max - min + 1)) + min;
}



console.log(randomFraction());
