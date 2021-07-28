#include<iostream>
#include<vector>
using namespace std;

struct Node{
        int data;
        struct Node* next;
        int flag;
};
struct Node* head;

//get new Node
struct Node* getNode(int data){
        struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
        temp->data = data;
        temp->flag = 0;
        temp->next = NULL;
        return temp;
}

//Insert node at last of list
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






//Make cycle in the linked list
void makeCycle(int n){
        struct Node* temp4 = head;
        for(int i=1; i<=n-1; i++){
                temp4 = temp4->next;
        }

        struct Node* tempLast = head;
        while(tempLast->next != NULL){
                tempLast = tempLast->next;
        }

        tempLast->next = temp4;
}


struct Node* matchInCycle(){
        struct Node* temp1 = head;
        struct Node* temp2 = head;

        while (temp1 && temp2 && temp1->next){
                temp1 = temp1->next->next;
                temp2 = temp2->next;

                if(temp1 == temp2){
                        return temp1;
                }
        }
        return NULL;
}

int detectCycle(){
        struct Node* temp = head;
        struct Node* match = matchInCycle();

        while(temp && match){
                temp = temp->next;
                match = match->next;

                if(temp == match){
                        return temp->data;
                }
        }
        return -1;
}



int main(){
        head = NULL;
        for(int i=1; i<=10; i++){
                insert(i);
        }

        //Be carefull to pass data in makeCycle
        //For reduce complexity we don't add
        //any bound checking to it.
        makeCycle(6);
        cout<<detectCycle();
}
