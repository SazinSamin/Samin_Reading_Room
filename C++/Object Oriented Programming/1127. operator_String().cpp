// operator string() is  the string representation of a class.
// https://stackoverflow.com/questions/2239380/what-does-the-operator-string-some-code-do



#include<iostream>
using namespace std;

class Base{
        public:
                operator string(){
                        return "This is Base class";
                }
};

int main(){
        Base b = Base();
        cout << string(b) << endl;
}
