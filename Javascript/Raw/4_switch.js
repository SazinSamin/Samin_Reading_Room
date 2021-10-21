// I have found that switch statement doesn't mess up the numerical 1 and string 1 as true, like == (normal comparision) operator.

var list = [1, 2, 4, 5, 6];
var num = 1;

// if we do
// var num = "1";
// it will go to the defaule case.

switch(num){
        case 1:
                console.log("1");
                break;
        case 2:
                console.log("2");
                break;
        case 3:
                console.log("3");
                break;
        default:
                console.log("Error !");
}
