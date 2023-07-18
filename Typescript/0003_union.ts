// userName data type be either "string" or "number" or "null";
let userName : string | number | null;

userName = 123;
userName = null;
userName = "Ashique";

function displayName (userName : string | number | null ) : void{
  console.log(userName);
}

displayName(userName);