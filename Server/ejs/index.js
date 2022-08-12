const app = require('express')();

app.set('view engine', 'ejs');

app.route('/')
        .get((req, res) => {
                res.render('index', {});
});

app.listen(3000, () => {
        console.log('Server is running on 3000...');
});