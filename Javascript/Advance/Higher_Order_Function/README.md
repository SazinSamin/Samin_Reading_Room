# Higher Order Function  
***From ChatGpt***  
A higher-order function (HOC) is a function that takes one or more functions as arguments and/or returns a function as its result.
In other words, it operates on functions by either accepting them as inputs or producing them as outputs. This concept is derived 
from functional programming, where functions are treated as first-class citizens and can be manipulated and passed around just 
like any other data type.
Formally, a higher-order function can be defined as follows:
  - It takes one or more functions as arguments: A higher-order function can receive other functions as parameters, 
  allowing it to operate on those functions or use them to create new functions.
  - It returns a function: A higher-order function can generate and return a new function as its result. This returned function can 
then be stored in a variable, passed as an argument to another function, or used in any other way that a regular function can beused. 

[Higher Order Function](https://www.smashingmagazine.com/2020/06/higher-order-components-react/)  
[Higher Order Function](https://dmitripavlutin.com/javascript-higher-order-functions/)




Eaxmple 1 :  
```
const operationLogger = (operation) => {
  return (...args) => {
    const result = operation(...args);
    console.log(result);
  }
}

const add = (a, b) => a + b;
const subs = (a, b) => a - b;

const addOperation = operationLogger(add);
const subsOperation = operationLogger(subs);

addOperation(20, 10);
subsOperation(20, 10)
```

From ChatGpt  
If a function recieves function as argument but return an array, is it be a HOC ?  
- Yes, if a function takes a function as an argument but returns an array (or any other non-function value), it would still be 
considered a higher-order function (HOC). The crucial aspect of a higher-order function is that it either takes functions as 
arguments, returns functions, or both. The return value itself does not have to be a function.  
```
const calculate = (operation, init, nums) => {
  let result = init;
  for(let num of nums) {
    result = operation(result, num);
  }
  return result;
}

const add = (a, b) => a + b;
const subs = (a, b) => a - b;

const nums = [1, 2, 3, 4, 5];
console.log(calculate(add, 0, nums));
console.log(calculate(subs, 0, nums));
```  
Example of HOC in Javascript are   
- forEach, map, reduce, filter
