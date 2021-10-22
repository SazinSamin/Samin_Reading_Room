// https://www.youtube.com/watch?v=eUsTO5BO3WI&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=75
// https://www.geeksforgeeks.org/structured-binding-c/
// remember structure binding only works with C++17.



#include<iostream>
#include<tuple>
using namespace std;

tuple<string, int> GetPerson(){
       string name = "Sazin";
       int age = 24;
       return {name, age};
}

int main(){

       // using structure binding we can declear and initialize as many as value we wish 
       auto[name, age] = GetPerson();
       cout << name << " " << age << endl;

       // an example by array
       int array[3] = {1, 2, 3};
       auto[one, two, three] = array;
       cout << one << " " << two << " " << three << endl;
}
