int FindSum(struct Node* head){
        if(head == NULL){
                return 0;
        }
        return head->data + Sum(head->right) + Sum(head->left);
}
