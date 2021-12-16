try{
        throw RangeError("You are out of range");        
}catch(err){
        console.log(err);
}finally{
        console.log("This codeblock excuted always");
}
