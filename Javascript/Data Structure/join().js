// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/join
// join an array or array like object

const array = ['B', 'a', 'n', 'l', 'a', 'd', 'e', 's', 'h'];

// without any parameter element will joined togerther by comma(,);
const res1 = array.join();

// if seperater is an empty string, all elements joined together without any gap
const res2 = array.join('');

const res3 = array.join('--');

console.log(res1);
console.log(res2);
console.log(res3);
