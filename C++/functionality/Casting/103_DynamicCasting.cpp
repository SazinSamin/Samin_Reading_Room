 /*
 dynamic cast is actullay for casting from one class to another.
 Base class to Child class = DownCasting
 Child class to Base class = UpCasting
 But if we manually do DownCasting, it would be Ok, because Child class already have information about Base class
 But UpCasting may cause problem, because a function which is unique to Child class may not have in Base class.
 Also a Child class instance, which type is "pointer to a Base" class, if we cast it to another Child of Base class
 then it might crash the problem as well, because in Casting time don't know what the actual type of that instance.
 In dynamic_cast casting will not happend and return "null" in this case.

 https:www.youtube.com/watch?v=CiHfz6pTolQ&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=74
 https:www.geeksforgeeks.org/dynamic-_cast-in-cpp/
https://en.cppreference.com/w/cpp/language/dynamic_cast
 
 
 Also know about virtual function & polymorphic class to better understand the problem solved by dynamic cast
 https:github.com/SazinSamin/Samin_Reading_Room/blob/main/C%2B%2B/Object%20Oriented%20Programming/1117.%20Vitual_Function.cpp
*/



#include<iostream>
using namespace std;

// Polymorphic class, becase it has one virtual function. 
class Base{
       public:
              virtual void print(){
                     cout << "This is Base class" << endl;
              }
};

class Child1 : public Base{
       public:
              void print(){
                     cout << "This is Child1 class" << endl;
              };
};

class Child2 : public Base{
       public:
              void print(){
                     cout << "This is Child2 class" << endl;
              };
};


int main(){
       Base* b1 = new Base();


       Child1* c1 = dynamic_cast<Child1*>(b1);
       Child1* c2 = (Base*)(b1);
       if(c1){
              c1->print();
       }else{
              cout << "Cust didn't successfull" << endl;
       }

}

