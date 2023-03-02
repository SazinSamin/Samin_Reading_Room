//Priority_queue array implementation
//Priority will be corresponding data value

#include<iostream>
using namespace std;
#define MAX 100
#define vacant -99999
int pri_qeue[MAX];
int front = -1;
int rear = -1;

//Insert data to the array / priority_queue
void Insert(int data){
        if(front == -1 && rear == -1){
                front++; rear++;
                pri_qeue[rear] = data;
                return;
        }

        int i = 0;
        for(i=0; i<=rear; i++){
                if(data >= pri_qeue[i]){
                        for(int j=rear+1; j>=i; j--){
                                pri_qeue[j] = pri_qeue[j-1];
                        }
                        pri_qeue[i] = data;
                        rear++;
                        return;
                }
        }

        pri_qeue[i] = data;
        rear++;
}

//Delete top data from the array / priority_queue
void Delete(int data){
        if(rear == -1 && front == -1){
                cout<<"\nList is empty";
                return;
        }

        for(int i=0; i<rear; i++){
                if(data >= pri_qeue[i]){
                        pri_qeue[i] = pri_qeue[i+1];
                }
        }
        rear--;
        if(rear == -1){
                front = -1;
        }
}

//Get top data from the array / priority_queue
int Top(){
        return pri_qeue[front];
}


int main(){
        for(int i=0; i<100; i++){
                pri_qeue[i] =  vacant;
        }

        Insert(12);
        Insert(13);
        Insert(11);
        Insert(10);
        Insert(14);
        Insert(1);
        Insert(50);

        cout<<"\nTop schedule: "<<Top();
        //traversing the array
        cout << "\n";
        for (int i = front; i <= rear; i++){
                cout << " " << pri_qeue[i];
        }

        Delete(12);
        Delete(11);
        Delete(50);
        cout << "\nTop schedule: " << Top();

        //cout<<"\nFront: "<<front<<" "<<" Rear "<<rear;
        cout<<"\n";
        for(int i=front; i<=rear; i++){
                cout<<" "<<pri_qeue[i];
        }
}
