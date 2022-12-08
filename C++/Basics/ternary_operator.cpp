// the ternary operator is alternative of if else condition, also it has some performance benefit
// if we wrote this code as like,

//        in here we actully creating an empty string object, then we override the object inside the if else block with new one,
//        so it's technically slow, beacuse we first creating an empty string, then destroying it and again override this.
//       but, in this case ternary value can do some return value optimization.
//      also ternary operator looks cleaner.

//        if(name == 0){
//                name = "True";  then
//        }else{
//                name = "False";
//        }


#include<iostream>
using namespace std;

int main(){
        int n1 = 1;
        string name = n1 ? "True" : "False";
        cout << name << endl;
}
