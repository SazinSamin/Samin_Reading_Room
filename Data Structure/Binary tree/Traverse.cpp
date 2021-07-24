void traverse(struct Node* head){
        if(head == NULL){
                return;
        }

        traverse(head->left);
        cout<<head->data<<" ";
        traverse(head->right);
}
