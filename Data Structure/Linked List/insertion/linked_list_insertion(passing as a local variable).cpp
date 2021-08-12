//Node pass to funtion from the main function & return from there.

#include<iostream>
using namespace std;

struct Node{
        int data;
        struct Node* next;
};


struct Node* insert( int data, struct Node* head){
        struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
        temp->data = data;
        temp->next = NULL;
        if(head == NULL){
                head = temp;
                return head;
        }

        temp->next = head;
        head = temp;
        return head;
}

void display(struct Node* head){
        struct Node* temp = head;
        while(temp != NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
        }
}



int main(){
        struct Node* head = NULL;
        for(int i=0; i<10; i++){
                head = insert(i, head);
        }
        display(head);
}
