function Person(fName, lNamge, age) {
        this.firstName = fName;
        this.lastName = lNamge;
        this.age = age;
        this.location = "Dhaka";
        // we can make a variable private by create a variable inside the constructor function.
        // by this the scope of the variable will just be avaiable inside the constructor, not globally like
        // the rest of others.
        // only the methods inside the constructor can have access & modify the variable.
        let pass = 123;
}


const p1 = new Person("Ahmed", "Hasan", 23);
for(let i in p1) {
        console.log(i);
}
