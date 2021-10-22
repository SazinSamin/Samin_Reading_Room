// remember in case of Linux we have to compile the thread program using -pthread flag
// ex: g++ -pthread main.cpp -o main.o
// Multithreading in C++ ->             https://www.geeksforgeeks.org/multithreading-c-2/
// Multithreading in C++ ->             https : //www.geeksforgeeks.org/multithreading-in-cpp/
// The Cherno ->                        https://www.youtube.com/watch?v=wXBcwHwIt_I&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=62
// Pthread ->                           https://en.wikipedia.org/wiki/Pthreads
// -pthead Linux compilation ->         https://askubuntu.com/questions/1015274/simple-c-thread-program-cant-be-compiled



#include<iostream>
#include<thread>
        using namespace std;

void func1(){
        cout << "Thread 1 start" << endl;
        for(int i=0; i<100; i++){
                
        }
        cout << "Thread 1 closed" << endl;
}


void func2(){
        cout << "Thread 2 start" << endl;
        cout << "Thread 2 closed" << endl;
}

void func3(){
        cout << "Thread 3 start" << endl;
        cout << "Thread 3 operation" << endl;
        cout << "Thread 3 closed" << endl;
}


int main(){

        // create thread and put function for execution.
        thread worker1(func1);
        thread worker2(func2);
        thread worker3(func3);

        // Block main thread until our creading thread finish off
        worker2.join();
        cout << endl;
        worker3.join();
        cout << endl;
        worker1.join();
        cout << endl;
}
