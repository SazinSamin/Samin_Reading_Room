#include <bits/stdc++.h>
using namespace std;

struct Node{
        int data;
        struct Node *right;
        struct Node *left;
};
struct Node *head;


struct Node *getNode(int data){
        struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = data;
        temp->right = NULL;
        temp->left = NULL;
        return temp;
}

struct Node *insert(struct Node *head, int data){
        struct Node *node = getNode(data);

        if (head == NULL){
                head = node;
                return head;
        }

        if (data < head->data){
                head->left = insert(head->left, data);
        }
        else{
                head->right = insert(head->right, data);
        }

        return head;
}


int main(){
        struct Node *head = NULL;
        int array[] = {60, 30, 40, 12, 56, 23, 87, 34, 89, 77, 24};
        int length = sizeof(array) / sizeof(array[0]);
        for(int i=0; i<length; i++){
                head = insert(head, array[i]);
        }
}
