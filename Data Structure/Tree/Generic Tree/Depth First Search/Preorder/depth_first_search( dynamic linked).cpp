// https://www.youtube.com/watch?v=kMS5Fxjrd6E&list=PLlOmh-YAEmsA3TaCvAAQjXrgeZKWxEuak&index=7


#include<iostream>
#include<vector>
#include<queue>
using namespace std;


//                                       10
//                           /       /       \      \                                  
//                          2        34       56    100
//                      /     \                 /    |    \
//                    77      88               7     8     9


struct Node{
        int data;
        vector<struct Node*> child;
        int visit;
};
struct Node* newNode(int data);

int visited[20];

void dfs(struct Node* head){
        visited[head->visit] = 1;
        cout<<head->data<<" ";

        for(int i=0; i<head->child.size(); i++){
                //int x = 
                if(head->child[i]->visit == 0){
                        dfs(head->child[i]);
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
        dfs(root);
}


struct Node* newNode(int data){
        struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
        temp->data = data;
        temp->visit = 0;
        return temp;
}

