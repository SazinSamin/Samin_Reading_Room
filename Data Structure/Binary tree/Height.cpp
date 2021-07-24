int getHeight(struct Node* head){
        if(head == NULL){
                return 0;
        }

        int left_h = getHeight(head->left);
        int right_h = getHeight(head->right);

        return 1 + max(left_h, right_h);
}
