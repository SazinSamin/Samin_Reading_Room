// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Map


const map = new Map();

map.set('Name', 'Ahmed');
map.set('Age', '22');

console.log(map.get('Name'));

map.forEach((val, key) => {
        console.log(`${key}: ${val}`);
});
