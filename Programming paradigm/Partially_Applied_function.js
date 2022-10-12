// https://gist.github.com/polarity/9742935


// Partial application in Haskell involves passing less than the full number of arguments to a function that takes multiple arguments.
// https://www.quora.com/What-is-the-difference-between-a-partial-function-and-a-currying-function-in-Scala


function urlBuilder(scheme) {
        return function(domain) {
                return `${scheme}://${domain}`;
        }
}

// here this below line is an exmple of partial function, beccause here we actullay first get the partial 
// of our urlBuilder function, which return another function, 
// Also see we fixed one paramter in this function, another parameter will be given latter.
const schemed = urlBuilder('http'); 
const url1 = schemed('www.mozilla.com');
const url2 = schemed('www.firefox.com');

console.log(url1);
console.log(url2);
