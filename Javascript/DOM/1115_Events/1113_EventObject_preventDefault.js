var btn = document.querySelector('button');



// here event.target is button that has been clicked
btn.addEventListener('click', function(event){
        event.target.style.backgroundColor = 'blue';
        event.target.style.color = 'white';
        alert("No !!!!!!!!!!!!!!!!!!!");
})


var link = document.querySelector('a');
link.addEventListener('click', function(event){
        event.preventDefault();
        alert("Sorry !!! the website isn't secure");
})






/*<!-- helper html -->
<!DOCTYPE html>
<html lang="en">
<head>
        <meta charset="UTF-8">
        <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Document</title>

        <style>
                .style_1{
                        color: blue;
                        background-color: yellow;
                        font-size: 50px;
                }
        </style>

</head>
<body>
        <h1 id="h1_1">Javascript</h1>
        <button>Click Me</button><br><br>
        <a href="http://google.com">Google</a>

        <script src="test1.js"></script>


</body>
</html>*/
