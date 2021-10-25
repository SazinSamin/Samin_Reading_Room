var height;
var width;
window.addEventListener('resize', function(){
        height = window.innerHeight;
        width = window.innerWidth;
        document.getElementById('h').innerHTML = `Height: ${height}`;
        document.getElementById('w').innerHTML = `Width: ${width}`;
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
        </style>

</head>
<body>
        <h1 id="h">Height</h1>
        <h1 id="w">Width</h1>

        <script src="test1.js"></script>
</body>
</html>*/
