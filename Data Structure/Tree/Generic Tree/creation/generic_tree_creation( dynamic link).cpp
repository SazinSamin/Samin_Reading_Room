// see level order traversal of dynamic linked generic binary tree ->
// https://github.com/SazinSamin/Samin_Reading_Room/blob/main/Data%20Structure/Tree/Generic%20Tree/Level%20order(breath%20first)%20traversal/level%20order%20traversal(dynamic%20linked).cpp

#include<iostream>
#include<vector>
#include<queue>
using namespace std;


struct Node{
        int data;
        vector<struct Node*> child;
};
struct Node* newNode(int data);


struct Node* newNode(int data){
        struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
        temp->data = data;
        return temp;
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

}


