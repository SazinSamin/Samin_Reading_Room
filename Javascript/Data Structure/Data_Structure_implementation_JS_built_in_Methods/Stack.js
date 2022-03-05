// Stack implementation using Javascript Array.


// as Array push method add element at the end of the array which compared to push top of the stack.
// LIFO (Last In Fast Out)


const stack = [];
stack.push(1);
stack.push(2);
stack.push(3);


// pop() method remove element from the end of the stack, compare to remove top element from the stack.

const ret1 = stack.pop();

// get the top element.
console.log(stack[stack.length - 1]);
