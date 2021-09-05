void preorder(struct Node *head){
        if(head == NULL){
                return;
        }

        cout << head->data << " ";
        preorder(head->left);
        preorder(head->right);
}
