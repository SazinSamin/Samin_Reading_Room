// This methods describe in coursera mergeWithRoot procedure -> https://www.coursera.org/learn/data-structures/lecture/22BgE/split-and-merge

// We take two node root pointer root1 & root2
// Then we take a new root node, one subtree should be it's left side, another in right side.

// This methods has constrain that one of the tree all nodes have to be lesser or greater than the other tree all nodes.
// Then we have to take the largest value node from the all node lesser tree.
// or we have to take the smallest value node from the all node greater tree.
// Now, we make that node parent node of two trees & delete that node from the leaf.



#include <bits/stdc++.h>
using namespace std;

struct Node{
        int data;
        struct Node *right;
        struct Node *left;
};
struct Node *head;

// helper functions...
struct Node *getNode(int data);
struct Node *insert(struct Node *head, int data);
void inroder(struct Node* head);

// Take tow tree root or head pointers.
struct Node* mergeTree(struct Node* head1, struct Node* head2){
       
       // Take tow new nodes pointing to the hea 
       struct Node* delHead = head1;
       struct Node* newHead = head1;
 
       // From while loop we take the seconds last pointer, or seconds large value node. 
       while(delHead->right->right != NULL){
               delHead = delHead->right;
       }

        // Take largest value node.
        newHead = delHead->right;
        // Delete that node by set pointer NULL.
        delHead->right = NULL;
        

        // make the lesser subtree largest node as parent of two trees.
        newHead->left = head1;
        newHead->right = head2;

        // return new parent.
        return newHead;
}

// As this methods has constrain that one of the tree all nodes have to be lesser or greater than the other tree all nodes.
// We take here as head1 data will be lesser than head2. 
// So, to keep things simple.
// If head1 less than head2 we keep it as it is.
// else we changes their position for keep merge simple.

struct Node* mergeTwoTree(struct Node* head1, struct Node* head2){
        if(head1->data < head2->data){
                return mergeTree(head1, head2);
        }else{
                return mergeTree(head2, head1);
        }
}


int main(){
        struct Node *tree1 = NULL;
        int length;
        int array1[] = {123, 454, 633, 444, 234, 653};
        length = sizeof(array1) / sizeof(array1[0]);
        for(int i=0; i<length; i++){
                tree1 = insert(tree1, array1[i]);
        }
        //inroder(tree1);

        struct Node *tree2 = NULL;
        int array2[] = {12, 45, 63, 44, 23, 65};
        length = sizeof(array2) / sizeof(array2[0]);
        for(int i=0; i<length; i++){
                tree2 = insert(tree2, array2[i]);
        }
        //inroder(tree2);

       struct Node* mergedTree = mergeTwoTree(tree1, tree2);
       inroder(mergedTree);
}


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

void inroder(struct Node* head){
        if(!head) return;
        inroder(head->left);
        cout<<head->data<<" ";
        inroder(head->right);
}


