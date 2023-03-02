// https://www.youtube.com/watch?v=Z_hPJ_EhceI&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=42
// https://www.geeksforgeeks.org/this-pointer-in-c/
// https://www.geeksforgeeks.org/g-fact-77/


// "this"  actually a pointer to that class, it is only available inside the class,
// by using "this" we can access to class variable & methods inside the class.

#include<iostream>
using namespace std;

class Person{
        private:
                string name;
                int age;
        public:
                Person(string name, int age){
                        // accessesing class variable name & age and method display() using this pointer.
                        this->name = name;
                        this->age = age;
                        this->display();
                }

                void display(){
                        cout << "Name: " << this->name << " Age: " << this->age << endl;
                }


                // we can also get reference of this class by dereferancing the "this" pointer.
                Person& GetClass(){
                        return *this;
                }

                Person& setName(string name){
                        this->name = name;
                        return *this;
                }

                Person& setAge(int age){
                        this->age = age;
                        return *this;
                }
};



int main(){
        Person p1("Sazin", 24);

        // instance p2 will get the reference of p1.
        Person p2 = p1.GetClass();
        p2.display();

        // When a reference to a local object is returned, the returned reference 
        // can be used to chain function calls on a single object.
        p1.setName("Rishad").setAge(23);
        p1.display();
}
