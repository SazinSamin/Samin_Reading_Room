//https://www.geeksforgeeks.org/construct-a-binary-tree-from-parent-array-representation/
#include<iostream>
using namespace std;

struct Node{
        int data;
        struct Node* left;
        struct Node* right;
};


struct Node* makeNode(int data){
        struct Node* temp = new Node();
        temp->data = data;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
}


void getNode(int parent[], Node* nodeStorage[], int i,  Node **root){
        if(nodeStorage[i] != NULL){
                return;
        }

        nodeStorage[i] = makeNode(i);

        if(parent[i] == -1){
                *root = nodeStorage[i];
                return;
        }

        if(nodeStorage[parent[i]] == NULL){
                int x = parent[i];
                getNode(parent, nodeStorage, parent[i], root);
        }

        struct Node* parentNode = nodeStorage[parent[i]];

        if(parentNode->left == NULL){
                parentNode->left = nodeStorage[i];
        }else{
                parentNode->right = nodeStorage[i];
        }
}


struct Node* getTree(int parent[], int n){
        Node* nodeStorage[n];
        for(int i=0; i<n; i++){
                nodeStorage[i] = NULL;
        }

        struct Node* root = NULL;
        for(int i=0; i<n; i++){
                getNode(parent, nodeStorage, i, &root);
        }
        
        return root;
}



void traverse(struct Node* head){
        if(head == NULL){
                return;
        }
        
        traverse(head->left);
        cout<<head->data<<" ";
        traverse(head->right);
}


int main(){
        int array[] = {-1, 0, 0, 1, 1, 3, 5};
        int length = sizeof(array) / sizeof(array[0]);

        struct Node* head = getTree(array, length);
        traverse(head);
}
