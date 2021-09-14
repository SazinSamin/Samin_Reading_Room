#include<iostream>
using namespace std;
#define MAX 10

struct Node{
        int data;
        struct Node* next;
};

struct Node *head = NULL;
// struct Node* tail = NULL;

struct Node* getNode(int data){
        struct Node* temp = new Node();
        temp->data = data;
        temp->next = NULL;
        return temp;
}

void insert(int data){
        if(!head){
            head = getNode(data);    
            return;
        }

        struct Node* newNode = getNode(data);
        newNode->next = head;
        head =  newNode;
}

void traverse(){
        cout << "\n";
        struct Node* temp = head;
        while(temp){
                cout << temp->data << " ";
                temp = temp->next;
        }
}



struct Node* search(int data){
        struct Node* temp = head;
        
        while(temp){
                if(temp->data == data){
                        return temp;
                }
                temp = temp->next;
        }
        return NULL;
}


int Size(){
        struct Node* temp = head;
        int count  = 0;
        while(temp){
                temp =  temp->next;
                count++;
        }
        return count;
}


void deleteLast(){
        struct Node* temp = head;
        while(temp->next->next){
                temp = temp->next;
        }

       // cout << "\nBefore last: " << temp->data;
        //cout << "\nLast: " << temp->next->data;

        
        delete(temp->next);
        temp->next = NULL;
}


void deletSpecifiq(int data){
        struct Node* temp = head;
        while(temp->next){
                if(temp->next->data == data){

                        struct Node *delNode = temp->next;
                        temp->next = temp->next->next;
                        delete (delNode);
                        break;
                }
                temp = temp->next;
        }


}


int Top(){
        return head->data;
}


void cacheSearch(int data){
        int top;

        if(search(data)){
                deletSpecifiq(data);
                insert(data);
                top = Top();

        }else{
                if(Size() == MAX){
                        deleteLast();
                        insert(data);
                }else{
                        insert(data);
                }

                top = Top();
        }
}




int main(){        
        int array[] = {23,45, 4,545 ,34,52,3,34,4/*,45,45,4,6,7,67,43,34,32,12,33,25,54,6*/};
        int length = sizeof(array) / sizeof(array[0]);
        for(int i=0; i<length; i++){
                insert(array[i]);
        }

        traverse();
        cacheSearch(4);
        traverse();
        cacheSearch(23);
        traverse();

        cacheSearch(45);
        traverse();

        cacheSearch(10);
        traverse();
        
        cacheSearch(12);
        traverse();

        cacheSearch(14);
        traverse();

        cacheSearch(16);
        traverse();

        cacheSearch(10);
        traverse();

}
