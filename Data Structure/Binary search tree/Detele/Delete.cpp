//https : //www.geeksforgeeks.org/binary-search-tree-set-2-delete/
//https://www.youtube.com/watch?v=gcULXE7ViZw


#include<iostream>
using namespace std;

struct Node{
        int data;
        struct Node* left;
        struct Node* right;
};

//All neccessary function declearation...
struct Node *insert(struct Node *head, int data);
void display(struct Node *head);
struct Node *FindMin(struct Node *head);



struct Node *deleteNode(struct Node *head, int data){
        if (head == NULL){
                return head;
        }

        //If data given data less than the head, go to the left subtree
        if (data < head->data){
                head->left = deleteNode(head->left, data);
        }

        //If data given data greater than the head, go to the right subtree
        else if (data > head->data){
                head->right = deleteNode(head->right, data);
        }

        //If none of this above, that means we are find the given data or node postion...
        else{
                // 1. If the node has no child.
                //If the node has no right and left child, that means it is the leaf node, we can delete the node
                //without harming the tree structure...
                if (head->right == NULL and head->left == NULL){
                        return NULL;
                }

                // 2. If the node has one child. we can easily point to the next element of the given node
                //and delete the given node by freeing the node.

                //If left child NULL, that means we have right child.
                if (head->left == NULL){
                        //Take the next elememnts of given node position.
                        struct Node *temp = head->right;
                        //delete the node.
                        free(head);
                        //now return the node we save in the temp.
                        return temp;
                }


                //do same above for left tree also
                if (head->right == NULL){
                        struct Node* temp = head->left;
                        free(head);
                        return temp;
                }

                // 3. If the node has 2 child.
                //Find the next value of the given node.
                //We can find that from the node right child, leftmost node.
                struct Node* min = FindMin(head->right);
                //Take the data from the node and put to the given node.
                head->data = min->data;
                //Now delete that leftmost, given node next node.
                head->right = deleteNode(head->right, head->data);
                
                return head;
        }
        return NULL;
}

int main(){

        struct Node *head = NULL;
        int array[] = {5, 2, 1, 4, 6, 8, 9, 7, 3};
        int length = sizeof(array) / sizeof(array[0]);

        for (int i = 0; i < length; i++){
                head = insert(head, array[i]);
        }
        display(head);
        deleteNode(head, 5);
        cout << "\n";
        display(head);
}



struct Node *insert(struct Node * head, int data){
        struct Node *temp = new Node();
        temp->data = data;
        temp->right = NULL;
        temp->left = NULL;

        if (head == NULL){
                head = temp;
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

void display(struct Node * head){
        if (head == NULL){
                return;
        }
        display(head->left);
        cout << head->data << " ";
        display(head->right);
}

struct Node* FindMin(struct Node * head){
        if (head == NULL){
                return NULL;
        }

        if (head->left != NULL){
                while (head->left != NULL){
                        head = head->left;
                }
                return head;
        }
        return head;
}

