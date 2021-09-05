void DeleteAllNodes(struct Node *head){
        if(head == NULL){
                return;
        }

        DeleteAllNodes(head->left);
        DeleteAllNodes(head->right);
        delete head;
}


void DeleteTree(struct Node* head){
        if(head != NULL){
                DeleteTree(head);
        }
        head == NULL;
} 

