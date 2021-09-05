/*Preorder traversal is used to create a copy of the tree. Preorder traversal is also used to get prefix expression on of an 
expression tree.*/


void preorder(struct Node *head){
        if(head == NULL){
                return;
        }

        cout << head->data << " ";
        preorder(head->left);
        preorder(head->right);
}
