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

console.log(person.fullName.call(person1, "Jhenaidah", "Bangladesh"));
console.log(person.fullName.call(person2, "Gazipur", "Bangladesh"));
