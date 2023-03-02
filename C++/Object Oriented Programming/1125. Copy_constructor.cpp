// https://www.youtube.com/watch?v=BvR1Pgzzr38&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=45
// https://www.geeksforgeeks.org/copy-constructor-in-cpp/

// when we want instantiate a object with the data of other object of same class, then we need copy constructor...
// C++ gives us a default copy construcot, but that constructor does shallow copy, means just that class member variable
// address, instead of allocate new memory for new object.
// C++ default copy constructor does well for normal class member, but become probmatic for heap allocating memory,
// as two then Object pointing to the same memory location.
// For how to deal with copy constructor when we have heap allocated class member, go to below link->
// https://github.com/SazinSamin/Samin_Reading_Room/blob/main/C%2B%2B/VoltStar/copy_constructor_for_heap_allocate_memory.cpp


// But if we define copy constructor manually, then we can do deep copy, means allocating new memory for new object
// and put data there.




#include<iostream>
using namespace std;

class Person{
        string name;
        int age;

        public:
                Person(string n, int a) : name(n), age(a) {}
                
                // Copy constructor
                Person(const Person& other){
                        name = other.name;
                        age = other.age;
                }

                void display(){
                        cout << name << " " << age << endl;
                }
};

int main(){
        Person p1("Sazin", 24);
        // Copying one object to other.
        Person p2 = p1;

        p2.display();
}
