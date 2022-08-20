const express = require('express');

const app = require('express')();

// set the view engine
app.set('view engine', 'ejs');
app.use(express.urlencoded({extended: true}));

const cart = [];

app.get('/', (req, res) => {
        res.render('index', { cartFruits: cart });
});

app.post('/', (req, res) => {
        cart.push(req.body.fruits)
        res.redirect('/');
});

app.listen(3000, () => {
        console.log('Server is running on 3000...');
});