// https://gist.github.com/polarity/9742935


// Partial application in Haskell involves passing less than the full number of arguments to a function that takes multiple arguments.
// https://www.quora.com/What-is-the-difference-between-a-partial-function-and-a-currying-function-in-Scala


function urlBuilder(scheme) {
        return function(domain) {
                return `${scheme}://${domain}`;
        }
}

//  Here this below line is an exmple of partial function, beccause here we actullay first use the partial 
// of our urlBuilder function with one arguments, which return another function which will take another argument. 
// So, we didn't pass the all arguments need to complete the function at once.
const schemed = urlBuilder('http'); 

// Now we call the function that returned from the parent function with rest of the parameter


const url1 = schemed('www.mozilla.com');
const url2 = schemed('www.firefox.com');

console.log(url1); // "http://www.mozilla.com"
console.log(url2); // "http://www.firefox.com"
