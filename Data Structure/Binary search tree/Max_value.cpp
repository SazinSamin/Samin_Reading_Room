int FindMax(struct Node *head){
        if (head == NULL){
                return -1;
        }

        if (head->right != NULL){
                while (head->right != NULL){
                        head = head->right;
                }
                return head->data;
        }
        return -1;
}
