// https://javascript.plainenglish.io/data-hiding-with-javascript-module-pattern-62b71520bddd


// properties & function defined inside a funciton
function studentDetails(name, age, id) {
        // exposed properties
        let _name = name;
        let _age = age;
        let _id = id;
        // hidden properties or private variable to the function like Class.
        let _cgpa = 3.34;

        // use of hidden properties from a exposed properties
        var _result = function() {
               return (_cgpa > 3.00) ? "Good" : "Not good";
        }

        // we exposing our desired properties by return from the funciton, 
        return {
                name: _name,
                age: _age,
                id: _id,
                result: _result
        }
}

// we get access to that properties which are exposed.
const s1 = studentDetails("Sazin", 24, 11);
console.log(`${s1.name}, ${s1.age}, ${s1.id}`);

console.log(s1.result());
