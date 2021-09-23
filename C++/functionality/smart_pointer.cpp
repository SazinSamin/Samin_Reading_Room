// unique, shared all this type of pointer are called smart pointer, they automatically deleted in the end of 
// their scope life cycle.

#include<iostream>
#include<memory>
using namespace std;



class Person{
        private:
                string name;
                int age;
        public:
                Person(string n, int a) : name(n), age(a) { cout << "Created Object" << endl; }
                ~Person() { 
                        cout << "Destroyed Object: " << name << endl;
                }

                void display(){
                        cout << "Name: " << name << " Age: " << age << endl;
                }
};

int main(){
        // unique_ptr are hold unique_position. So, they cann't be copied, or store in another pointer,
        // because if one pointer freed that location, another then hold that empty free position, 
        // try to free again and crashed program 
        unique_ptr<Person> u_ptr = make_unique<Person>("u_ptr", 24);
        u_ptr->display();


        // shared_ptr do work by reference counting. if this pointer copied they keep track of counting the copy
        // when reference or copy count become 0, it's get deleted.
        shared_ptr<Person> sha_ptr11 = make_shared<Person>("sha_ptr11", 23);
        shared_ptr<Person> sha_ptr12 = sha_ptr11;

        sha_ptr12->display();


        weak_ptr<Person> w_ptr = sha_ptr12;


        int x =10;
        int y = 20;

}
