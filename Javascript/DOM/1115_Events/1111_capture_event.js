// we can also get the button by getElementById()

var btn = document.querySelector('button');
function Clicked(){
        alert("You have clicked a button");
}

// we can also use anonymous function here.
btn.onclick = Clicked;

// also can be listen in html
// <button onclick="Clicked()">Click Me</button>




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

        <button>Click Me</button>

        <script src="test1.js"></script>


</body>
</html>*/

