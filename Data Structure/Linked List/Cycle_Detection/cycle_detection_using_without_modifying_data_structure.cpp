#include <iostream>
#include <vector>
using namespace std;

struct Node{
        int data;
        struct Node *next;
};
struct Node *head;

//get new Node
struct Node *getNode(int data){
        struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = data;
        temp->next = NULL;
        return temp;
}

//Insert node at last of list
void insert(int data){
        struct Node *temp = getNode(data);
        if (head == NULL){
                head = temp;
                return;
        }

        struct Node *temp2 = head;
        while (temp2->next != NULL){
                temp2 = temp2->next;
        }
        temp2->next = temp;
}

//Make cycle in the linked list
void makeCycle(){
        struct Node *temp4 = head;
        for (int i = 1; i <= 4; i++){
                temp4 = temp4->next;
        }

        struct Node *tempLast = head;
        while (tempLast->next != NULL){
                tempLast = tempLast->next;
        }

        tempLast->next = temp4;
}



//Cycle detection function
//When we visit a node, first we save the that node next pointer to another(nx) node
//then we set that node next pointer to a temp node
//to traverse the loop, we point the head node to the nx node.
//see the code, you can understand

//We here actully traverse the loop and make every node next pointer pointing to the same temp node
//So, if a node already pointing to the temp node, that means we visited that node before
//and there is a loop.

bool detectCycle(struct Node* head){
  
        //First create a new node name "temp"
        struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
  
        //traverse node until it's null.
        while(head != NULL){
          
                //If head next is null, then we will reach to the end of the list,
                //there is no node anymore, so there is no loop.
                if(head->next == NULL){
                        return false;
                } 
                
                //If next pointing to the temp node
                //means we traverse the node before, so there is a loop.
                if(head->next == temp){
                        return true;
                }

                //First we save the next address of node to another node.
                struct Node* nx = head->next;
          
                //We make our node to pointing to temp node
                head->next = temp;
                
                //head pointing to the previously saved next node address.
                head =  nx;
        }

        return false;
}


void traverse(){
        struct Node* temp = head;
        cout<<"\nLoop begin: "<<endl;
        while(temp != NULL){
                cout<<temp->data<<endl;
                temp =  temp->next;
        }
}

int main(){
        head = NULL;
        for (int i = 1; i <= 10; i++){
                insert(i);
        }

        //traverse();
        makeCycle();
        if(detectCycle(head))
                cout<<"Loop found";
        else
                cout<<"Not found";
        
        //traverse();
}
