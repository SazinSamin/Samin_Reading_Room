#include<iostream>
#include<vector>
using namespace std;

struct Node{
        int data;
        struct Node* next;
};
struct Node* head;



//get new Node
struct Node* getNode(int data){
        struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
        temp->data = data;
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
void makeCycle(){
        struct Node* temp4 = head;
        for(int i=1; i<=4; i++){
                temp4 = temp4->next;
        }

        struct Node* tempLast = head;
        while(tempLast->next != NULL){
                tempLast = tempLast->next;
        }

        tempLast->next = temp4;
}




//Declear global variable vector
//for persistence data
vector<int> v;
int saveData(int data){
        //Traverse the vector and see if the data already present or not.
        //If present return from that position with -1 sign to indicate that.
        for(int i=0; i<v.size(); i++){
                if(data == v[i]){
                        return -1;
                }
        }
        //If not present before, save to the vector.
        v.push_back(data);
        return 1;
}





//
void detectCycle(){
        struct Node* temp = head;
        while(temp != NULL){
                cout<<temp->data<<endl;
                //Put node data for testing that the node already visit or not
                //If the node have visited before then the data already saved in the vector
                //Which return -1 to indicate that. 
                if(saveData(temp->data) == -1){
                        cout<<"\nCycle Detected";
                        return;
                };
                temp = temp->next;
        }
}





int main(){
        head = NULL;
        for(int i=1; i<=10; i++){
                insert(i);
        }

        makeCycle();
        detectCycle();
}
