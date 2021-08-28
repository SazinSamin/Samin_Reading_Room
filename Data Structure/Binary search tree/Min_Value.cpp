int FindMin(struct Node* head){
        if(head == NULL){
                return -1;
        }

        if(head->left != NULL){
                while(head->left != NULL){
                        head = head->left;
                }
                return head->data;
        }
        return -1;
}


