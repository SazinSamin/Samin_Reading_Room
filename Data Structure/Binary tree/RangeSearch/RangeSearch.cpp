//https://www.coursera.org/learn/data-structures/lecture/T3oPE/basic-operations
//https://www.geeksforgeeks.org/inorder-successor-in-binary-search-tree/
#include <iostream>
#include<vector>
using namespace std;

//Define Node structure & it's body, with extra parent name "self reference node" for get the parent of a child node.
struct Node
{
        int data;
        struct Node *left;
        struct Node *right;
        struct Node *parent;
};

//All function Declearation
struct Node *getNode(int data);
void display(struct Node *head);
struct Node *insert(int data, struct Node *head);
struct Node *findNode(struct Node *head, int data);


void rangeSearch(struct Node* head, int r1, int r2){
        if(head == NULL){
                return;
        }
        
        rangeSearch(head->left, r1, r2);
        int x = head->data;
        if(head->data >= r1 && head->data <= r2){
                printf("%d ", head->data);
        }
        rangeSearch(head->right, r1, r2);

}



int main(){

        int array[] = {9, 1, 5, 6, 3, 8, 4, 7, 2};
        int length = sizeof(array) / sizeof(array[0]);

        struct Node *head = NULL;
        for (int i = 0; i < length; i++){
                head = insert(array[i], head);
        }

        rangeSearch(head, 2, 7);
        
}

//Allocate memory for new node & put data to it.
struct Node *getNode(int data)
{
        struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = data;
        temp->left = NULL;
        temp->right = NULL;
        temp->parent = NULL;
        return temp;
}

//Inorder traversal of a Node...
void display(struct Node *head)
{
        if (head == NULL)
        {
                return;
        }
        display(head->left);
        cout << head->data << " ";
        display(head->right);
}

//Insert a node to the tree...
struct Node *insert(int data, struct Node *head)
{

        struct Node *temp = getNode(data);
        if (head == NULL)
        {
                head = temp;
                return head;
        }

        struct Node *temp2;
        if (data < head->data)
        {
                temp2 = insert(data, head->left);
                head->left = temp2;
                //set currrent node as a parent of new node.
                temp2->parent = head;
        }

        else
        {
                temp2 = insert(data, head->right);
                head->right = temp2;
                //set currrent node as a parent of new node.
                temp2->parent = head;
        }
        return head;
}

struct Node *findNode(struct Node *head, int data)
{
        if (head == NULL)
        {
                return NULL;
        }

        if (head->data == data)
        {
                return head;
        }

        if (data < head->data)
        {
                return findNode(head->left, data);
        }

        else
        {
                return findNode(head->right, data);
        }
}

