# Javascript Objects  
[W3School object](https://www.w3schools.com/js/js_object_definition.asp)  
[Object all methods reference](https://www.w3schools.com/js/js_object_es5.asp)  

Some important properties:  
1. hasOwnProperty(val)  => return true if that object have that property.
2. val in person1   => return true if that object have that property.
3. Object.keys(obj1)  => return an array which have all the properties of an object, *herer obj1 is an sample object to pass as an argument.*  
4. Object.getOwnPropertyNames()  => return all property including non-enumarable which Object.keys() doesn't.  
5. instanceof   => return true if a instance is instantiate from that object, otherwise return false. ex: p1 instanceof person, here to check p1 is an instance person object created by a constructor.
