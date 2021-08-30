void invert(struct Node* head){
        if(head == NULL){
                return;
        }else{
                struct Node* temp;

                invert(head->left);
                invert(head->right);

                temp = head->left;
                head->left = head->right;
                head->right = temp;
        }
}

