//Find the middle of a linked list
//We will use 'Floyed Cycle Detection' algorithm to solve the problem.

#include<iostream>
#include<math.h>
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


void findMiddle(){
        //Declear slow & fast pointer;
        struct Node* slow = head;
        struct Node* fast = head;

        //Traverse the linked list where
        //slow pointer jump 1 Node at a time
        //Fast pointer jump 2 node that time.
        while(fast != NULL && fast->next != NULL){
                slow = slow->next;
                fast = fast->next->next;
        }

        cout<<"\nMiddle: "<<slow->data;
}


int main(){
        srand(time(0));
        for(int i=0; i<=10; i++){
                insert(rand() % 100);
        }
        display();
        findMiddle();
}
