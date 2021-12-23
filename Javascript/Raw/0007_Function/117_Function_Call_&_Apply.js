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
