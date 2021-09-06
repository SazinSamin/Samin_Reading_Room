https://www.geeksforgeeks.org/generic-tree-level-order-traversal/

#include<iostream>
#include<vector>
#include<queue>
using namespace std;


struct Node{
        int data;
        vector<struct Node*> child;
};
struct Node* newNode(int data);


void traverse(struct Node* head){
        if(!head) return;
        queue<struct Node*> q;
        q.push(head);

        while(!q.empty()){
                struct Node* temp = q.front();
                cout<<temp->data<<" ";
                q.pop();
                for(int i=0; i<temp->child.size(); i++){
                        q.push(temp->child[i]);
                }
        }
}



int main(){
        Node *root = newNode(10);
        (root->child).push_back(newNode(2));
        (root->child).push_back(newNode(34));
        (root->child).push_back(newNode(56));
        (root->child).push_back(newNode(100));
        (root->child[0]->child).push_back(newNode(77));
        (root->child[0]->child).push_back(newNode(88));
        (root->child[2]->child).push_back(newNode(1));
        (root->child[3]->child).push_back(newNode(7));
        (root->child[3]->child).push_back(newNode(8));
        (root->child[3]->child).push_back(newNode(9));

        traverse(root);
}


struct Node* newNode(int data){
        struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
        temp->data = data;
        return temp;
}


