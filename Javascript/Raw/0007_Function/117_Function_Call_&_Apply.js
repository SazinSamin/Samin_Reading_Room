// https://www.youtube.com/watch?v=_MFUxQ7OXbI&list=PLHiZ4m8vCp9OkrURufHpGUUTBjJhO9Ghy&index=77
// https://www.youtube.com/watch?v=hAfj8U0RKhI&list=PLHiZ4m8vCp9OkrURufHpGUUTBjJhO9Ghy&index=77

const person = {
        fullName: function (city, country) {
                return `Name: ${this.firstName} ${this.lastName} \nCity: ${city}\nCountry: ${country}`;
        }
};


const person1 = {
        firstName: "Sazin",
        lastName: "Samin"
};

const person2 = {
        firstName: "Ashique",
        lastName: "Ahmed"
};

// The call() method takes arguments separately.

console.log(person.fullName.call(person1, "Jhenaidah", "Bangladesh"));
console.log(person.fullName.call(person2, "Gazipur", "Bangladesh"));

// The apply() method takes arguments as an array.
console.log(person.fullName.apply(person1, ["Jhenaidah", "Bangladesh"]));
