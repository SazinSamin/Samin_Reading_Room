const crypto = require('crypto');
const data = 'Bangladesh is a very beautiful country';

const hash = crypto.createHash('sha512').update(data).digest('base64');
console.log(hash);

const key = '12345678';

const hmac = crypto.createHmac('sha512', key).update(data).digest('base64');
console.log(hmac);
