// Queue implementation using Javascript Array.
// FIFO(First In First Out)

const queue = [];

// Push element at the back, compare to the Queue.
queue.push(1);
queue.push(2);
queue.push(3);

// remove element from the first, like Queue.
const ret2 = queue.shift();
console.log(ret2);


// get the first element.
console.log(queue[0]);
