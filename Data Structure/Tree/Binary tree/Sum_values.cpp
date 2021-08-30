int getTreeSum(struct Node* head){
        if(head == NULL){
                return 0;
        }

        int l = getTreeSum(head->left);
        int r = getTreeSum(head->right);

        return head->data + l + r;
}
