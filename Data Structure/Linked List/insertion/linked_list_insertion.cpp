//This insertion using with pointer to pointer node.

#include<iostream>
using namespace std;

struct Node{
        int data;
        struct Node* next;
};
struct Node* head;

void insert( int data){
        struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
        temp->data = data;
        temp->next = NULL;
        if(head == NULL){
                head = temp;
                return;
        }

        temp->next = head;
        head = temp;
}

void display(){
        struct Node* temp = head;
        while(temp != NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
        }
}



int main(){
        for(int i=0; i<10; i++){
                insert(i);
        }

        display();


}
