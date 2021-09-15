// https://www.geeksforgeeks.org/static-keyword-cpp/

/* A static method cannot access a class’s instance variables and instance methods, 
because a static method can be called even when no objects of the class have been instantiated. 
For the same reason, the this reference cannot be used in a static method. The this reference must refer to
a specific object of the class, and when a static method is called, there might not be any objects of its class in memory.
*/
