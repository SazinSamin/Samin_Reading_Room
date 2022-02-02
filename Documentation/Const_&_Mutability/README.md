# Const & Mutability  
mutability is a sort of behaviour, where const is a programming keyword which use to get a variable as immutable. 
mutable means it can be change, opposite is immutable.  
when we declear a variable with "const", then we have to immediately set the value of that variable as well. So declear a variable with const bind the variable with the value, and we can't assign new value to that variable. That's the use of "const", kind of to achieve immutability to that variable. But the value isn't itself a immutable means we can change the variable value internally.   
Like in Javascript we can change the value of const array  

*const array = [1, 2, 3, 4, 5];  
array[0] = 10;  
array.forEach((val) => {  
        console.log(val);  
})*

but we can't assign new array or anything else to the "array" variable, which violate the const rule.  
also know about [String mutability](https://github.com/SazinSamin/Samin_Reading_Room/tree/main/Documentation/String%20mutability).  
