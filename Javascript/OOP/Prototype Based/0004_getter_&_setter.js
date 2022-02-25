const obj = {
        firstName: "Sazin",
        lastName: "Samin",
        age: 0,
        // getter
        get getAge() {
                return this.age;
        },
        // setter
        set nationality(val) {
                this.nationality = val;
        },
        nationality: "",
};

console.log(obj.getAge);
// I have found a issue in setter will set which property that property should be below that setter
// nor it will generate stack limit execed error.
obj.nationality = "Bangladeshi";

Object.defineProperty(obj, "fullName", {
        get: function () {
                return this.firstName + " " + this.lastName;
        }
});

Object.defineProperty(obj, "setAge", {
        set: function(val) {
                this.age = val;
        }
});

obj.setAge = 24;

for(let i in obj) {
        console.log(obj[i]);
}
