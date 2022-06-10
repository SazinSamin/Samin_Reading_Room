const promise1 = new Promise((resolve, reject) => {
    setTimeout(() => {
        resolve('Promise 1 resolve');
    }, 2000);
});

const promise2 = new Promise((resolve, reject) => {
    setTimeout(() => {
        resolve('Promise 2 resolve');
    }, 3000);
});

Promise.all([promise1, promise2]).then((res) => {
    console.log(res);
})
