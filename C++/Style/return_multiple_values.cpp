// Dealing with returning multiple values from function...
// https://www.youtube.com/watch?v=3cm0VckC8q0&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=52


#include<iostream>
#include<vector>
using namespace std;
// pass by reference
void increment_by_ref(int& a, int &b){
        a++;
        b++;
}

// get addreess the of that variable by pointer & directly write to that.
void increment_by_ptr(int* a, int *b){
        (*a)++;
        (*b)++;
}

// return as array
int* increment_by_array(int a, int b){
        a++;
        b++;
        return new int[2]{a, b};
}

// increment by vector
vector<int> increment_by_vector(int a, int b){
        a++;
        b++;
        return {a, b};
}


// make a strcuture with joining the different types of data, and return that struct, 
// we can also do this by make a class.
struct Node{
        int a;
        int b;
};

Node increment_by_struct(int a, int b){
        a++;
        b++;
        return {a, b};
}


// we can also use tuple        

int main(){
         int a = 10;
        int b = 20;
        increment_by_ref(a, b);
        cout << a << " " << b << endl;

        increment_by_ptr(&a, &b);
        cout << a << " " << b << endl;

        int* array = increment_by_array(a, b);
        a = *(array);
        b = *(array + 1);
        cout << a << " " << b << endl;

        vector<int> v = increment_by_vector(a, b);
        a = v[0];
        b = v[1];
        cout << a << " " << b << endl;

        struct Node temp = increment_by_struct(a, b);
        a = temp.a;
        b = temp.b;
        cout << a << " " << b << endl;
}       
