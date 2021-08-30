struct Node *findNode(struct Node *head, int data){
        if (head == NULL){
                return NULL;
        }

        if (head->data == data){
                return head;
        }

        if (data < head->data){
                return findNode(head->left, data);
        }

        else{
                return findNode(head->right, data);
        }
}

