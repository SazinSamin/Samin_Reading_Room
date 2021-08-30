int Height(struct Node* head){
        if(head == NULL){
                return 0;
        }
        return 1 + max(Height(head->right), Height(head->left));
}

