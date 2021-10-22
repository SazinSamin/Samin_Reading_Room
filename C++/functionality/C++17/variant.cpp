// https : // www.youtube.com/watch?v=qCc_Vqg3hJk&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=77
// This code only runs on C++17


#include <iostream>
#include <variant>
using namespace std;


int main(){

       variant<string, int> data;
       data = "Sazin";
       string name = get<string>(data);
       cout << name << endl;
       data = 24;
       int age = get<int>(data);
       cout << age << endl;
       
}
