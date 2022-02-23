# Javascript Objects  
[W3School object](https://www.w3schools.com/js/js_object_definition.asp)  
[Object all methods reference](https://www.w3schools.com/js/js_object_es5.asp)  

Some important properties:    
return true if that object have that property.
1.      hasOwnProperty(val)  
2. => 
3. val in person1   => return true if that object have that property.
4. Object.keys(obj1)  => return an array which have all the properties of an object, *herer obj1 is an sample object to pass as an argument.*  
5. Object.getOwnPropertyNames()  => return all property including non-enumarable which Object.keys() doesn't.  
6. instanceof   => return true if a instance is instantiate from that object, otherwise return false. ex: p1 instanceof person, here to check p1 is an instance person object created by a constructor.
7. person1.constructor == Person  => constructor property is a reference to the constructor function that created the instance. The advantage of the constructor property is that it's possible to check for this property to find out what kind of object it is. *here person1 is an instance & Person is an Object.
