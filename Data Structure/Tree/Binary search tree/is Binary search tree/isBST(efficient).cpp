bool isBSTutil(struct Node* head, int MinValue, int MaxValue){
        if(head == NULL){
                return true;
        }

        if(head->data < MinValue && head->data < MaxValue && isBSTutil(head->left, MinValue, head->data)
                && isBSTutil(head->right, head->data, MaxValue)){
                        return true;
                }

        return false;
}

bool isBst(struct Node* head){
        return isBSTutil(head, INT_MIN, INT_MAX);
}
