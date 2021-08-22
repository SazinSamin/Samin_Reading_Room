//https://www.coursera.org/learn/data-structures/lecture/T3oPE/basic-operations
//https://www.geeksforgeeks.org/inorder-successor-in-binary-search-tree/
#include <iostream>
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
int findNext(struct Node *head, int data);




int findNext(struct Node *head, int data)
{
        //search the node position
        struct Node *getSearchNode = findNode(head, data);

        //If node right has right child...
        if (getSearchNode->right != NULL)
        {
                //then go to the right subtree, just right node
                getSearchNode = getSearchNode->right;
                //traverse that just right node left subtree until the pointer hit NULL
                //When pointer hit hit NULL, thats means there is no node other node in it's left,
                //and this the just next node of out given node or data.
                while (getSearchNode->left != NULL)
                {
                        getSearchNode = getSearchNode->left;
                }
                //return that node data.
                return getSearchNode->data;
        }
        //If node has no right child...
        else
        {
                //Traverse the node by go to it's parent until the pointer hit NULL.
                while (getSearchNode->parent != NULL)
                {
                        //If any parent's node data is greater than the given data
                        //then that' will be the next adjacent node. then return data
                        if (getSearchNode->data > data)
                        {
                                return getSearchNode->data;
                        }
                        //get up to the tree, by traverse the parent of current node.
                        getSearchNode = getSearchNode->parent;
                }

                //If the pointer hit NULL, then we are in top most node, if top most node data is greater than
                //our given node then return that node.
                //If not than out given node is parent node & it has no right child also,
                //that means it has no adjacent node, so return a value(here is -1) to indicate that.
                if (getSearchNode->data > data)
                {
                        return getSearchNode->data;
                }
        }
        return -1;
}



int main(){
        
        int array[] = {9, 7, 5, 3, 1, 2, 4, 6, 8};
        int length = sizeof(array) / sizeof(array[0]);

        struct Node *head = NULL;
        for (int i = 0; i < length; i++){
                head = insert(array[i], head);
        }

        //display(head);
        for (int i = 0; i < length; i++){
                printf("%d: %d\n", array[i], findNext(head, array[i]));
        }
}






//Allocate memory for new node & put data to it.
struct Node *getNode(int data){
        struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = data;
        temp->left = NULL;
        temp->right = NULL;
        temp->parent = NULL;
        return temp;
}

//Inorder traversal of a Node...
void display(struct Node *head){
        if (head == NULL){
                return;
        }
        display(head->left);
        cout << head->data << " ";
        display(head->right);
}


//Insert a node to the tree...
struct Node *insert(int data, struct Node *head){
        
        struct Node *temp = getNode(data);
        if (head == NULL){
                head = temp;
                return head;
        }

        
        struct Node *temp2;
        if (data < head->data){
                temp2 = insert(data, head->left);
                head->left = temp2;
                //set currrent node as a parent of new node.
                temp2->parent = head;
        }
        
        else{
                temp2 = insert(data, head->right);
                head->right = temp2;
                //set currrent node as a parent of new node.
                temp2->parent = head;
        }
        return head;
}

struct Node *findNode(struct Node *head, int data){
        if (head == NULL){
                return NULL;
        }

        if (head->data == data){
                return head;
        }

        if (data < head->data){
                return findNode(head->left, data);
        }

        else{
                return findNode(head->right, data);
        }
}
