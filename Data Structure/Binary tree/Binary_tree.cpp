#include<bits/stdc++.h>
using namespace std;
struct Node{
        int data;
        struct Node* right;
        struct Node* left;
};
struct Node* head;

struct Node* getNode(int data){
        struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
        temp->data = data;
        temp->right = NULL;
        temp->left = NULL;
        return temp;
}


struct Node* insert(int data, struct Node* head){
        struct Node* node = getNode(data);

        if(head == NULL){
                head = node;
                return head;
        }

        if(data < head->data){
                head->left = insert(data, head->left);
        }else{
                head->right = insert(data, head->right);
        }

        return head;
}



int main(){
        struct Node* node = NULL;
        node = insert(10, node);
        node = insert(12, node);
        node = insert(13, node);
        node = insert(32, node);
        node = insert(42, node);
        node = insert(2, node);
        node = insert(3, node);
        node = insert(5, node);
}
