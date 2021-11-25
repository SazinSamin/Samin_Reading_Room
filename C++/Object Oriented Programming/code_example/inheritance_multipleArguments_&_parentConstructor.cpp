// realted solved problem: https://github.com/SazinSamin/Problem-Solving/blob/main/HackerRank/30%20days%20of%20code/Day%2012:%20Inheritance.cpp

#include<iostream>
using namespace std;

class Person{
    protected:
        string firstName;
        string lastName;

        Person(string fName, string lName) : firstName(fName), lastName(lName){}
        void getName(){
            cout << "Name: "<< this->firstName << " " << this->lastName << endl;
        }
};

class Student: public Person{
    private:
    int id;

    public:
    Student(string fName, string lName, int id) : id(id), Person(fName, lName){}

    void getInfo(){
        getName();
        cout << "ID: " << this->id;
    }
};

int main(){
    Student s("Sazin", "Samin", 24);
    s.getInfo();




}
