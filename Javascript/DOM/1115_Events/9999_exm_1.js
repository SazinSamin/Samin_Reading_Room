var myForm = document.querySelector('form');
myForm.addEventListener('submit', function(evt){
        myInput = document.querySelector('input').value;
        if(myInput == "Sazin"){
                evt.preventDefault();
                alert(`The name "${myInput}" already exits \n Try another`);
        }
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
        
        <form method="get">
                <label>You name: <input type="text" name="name"></label>
                <input type="submit">
        </form>

        <script src="test1.js"></script>


</body>
</html>*/
