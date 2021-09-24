#include<iostream>
#include<cstring>
using namespace std;

class Person{
        public:
        char* name;
        int age;

        public:
                Person(string nameString, int age){
                        int size = nameString.size();
                        name = new char[size + 1];
                        for(int i=0; i<size; i++){
                                name[i] = nameString[i];
                        }
                        nameString[size] = 0;
                        this->age = age;
                }

                ~Person(){
                        delete[] name;
                }

                Person(Person& other){                      
                        int size = strlen(other.name);
                        name = new char[size];
                        for(int i=0; i<size; i++){
                                name[i] = other.name[i];
                        }
                        age = other.age;
                }


                void display(){
                        cout << name << " " << age << endl;
                }
};

int main(){

        Person p1("Sazin", 24);
        Person p2 = p1;
        
        p2.display();

        cout << &p1.name << endl;
        cout << &p2.name << endl;
}
