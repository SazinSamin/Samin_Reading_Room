# String mutabilty  
also read [Const_&_Mutability](https://github.com/SazinSamin/Samin_Reading_Room/tree/main/Documentation/Const_%26_Mutability)  
Mutability meaning you can change anything. As we know String are array of character. But most of the time it treat as other primitive 
data type like int, bool which like String is a single object. String are mutable means you can change the String internal value, immutable means you can't change the individual characters of a string literal. Some some programming language they are mutable like C and C++ you can,
like a variable

- string myStr = "Good";
we can change it like 
- myStr[0] = "F";


But in other like Javascript, Python, Dart we can not do this.  
But unlike string, array are not immutable in js
[Reference](https://lemire.me/blog/2017/07/07/are-your-strings-immutable/)
