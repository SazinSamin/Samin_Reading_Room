const cars = new Map([
        ["BMW", 2021],
        ["Marcedes", 2022],
        ["Ford", 2023]
]);

// adding new element to the map
cars.set("Lamborgini", 2024);
console.log(cars.get("Marcedes"));

cars.forEach((key, val) => console.log(`${key}: ${val}`));

// keys() return keys of the map.
for(let i of cars.keys()) {
        console.log(i);
}
// values() return values of the map.
for(let i of cars.values()) {
        console.log(i);
}
// entries() return a map iterator
const getMap = cars.entries();
for(let i of getMap) {
        console.log(`${i[0]}: ${i[1]}`);
}

// object as key in map
const apple = {name: "apple"};
const orange = {name: "orange"};
const banana = {name: "banana"};

const newMap = new Map();
newMap.set(apple, 100);
newMap.set(orange, 200);
newMap.set(banana, 300);

for(var i of newMap) {
        console.log(`${i[0].name}: ${i[1]}`);
}
