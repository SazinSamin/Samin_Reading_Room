// ref: https://www.youtube.com/watch?v=IUBd76UQb34
// see video from 29 minutes.

const takeOrder = (curtomerNo, callback) => {
    console.log(`Order has taken from ${curtomerNo}`);
    callback(curtomerNo);
};

const processOrder = (curtomerNo, callback) => {
    console.log(`Cooking for ${curtomerNo}`);
    setTimeout(() => {
        console.log(`Process complete`);
        callback(curtomerNo);
    }, 3000);
};

const placeOrder = (curtomerNo) => {
    console.log(`Order place to ${curtomerNo}`);
};


// if this callback calling more & more callback function,
// this code will get enough messy.
// which is called callback HELL.
takeOrder('customer 1', (customer) => {
    processOrder(customer, () => {
        placeOrder(customer);
    });
});

