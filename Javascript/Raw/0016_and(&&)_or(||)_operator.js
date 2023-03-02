// the "&&"(and) operator
// if all the statement are true then selector become true
// if any of the statement is false then selector become false
var goodSleep = true;
var goodMood = true;


if(goodSleep && goodMood){
        console.log("The day is awesome");
}else{
        console.log("Seems like a bad day");
}


// the "||"(or) operator
// if any of the statement is true then selector become true
// if all statement are false then selector become false
var breakfast = true;
var lunch = true;
var dinner = false;

if(breakfast || lunch || dinner){
        console.log("Eat enough");
}else{
        console.log("I am starving");
}
