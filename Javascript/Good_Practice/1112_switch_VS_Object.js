// instead of switch we can use JS object

const eating = "Mango";

const fruits =  {
        apple: "I eat apple",
        orange: "I eat orange",
        mango: "I eat mago",
};

const result = fruits[eating] || "No eating now";
console.log(result);
