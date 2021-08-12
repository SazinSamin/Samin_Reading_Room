#include<iostream>
using namespace std;

struct Node{
        int data;
        struct Node* next;
};
struct Node* head;

struct Node* getNode(int data){
        struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
        temp->data = data;
        temp->next = NULL;
        return temp;
}

void insert(int data){
        struct Node* temp = getNode(data);
        if(head == NULL){
                head = temp;
                return;
        }

        struct Node* temp2 = head;
        while(temp2->next != NULL){
                temp2 = temp2->next;
        }

        temp2->next = temp;
}

void traverse(){
        struct Node* temp = head;
        while(temp != NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
        }
}

int main(){
        head = NULL;
        insert(1);
        insert(2);
        insert(3);
        insert(4);
        traverse();
}
