
void DeleteTree(struct Node *head){
        if(head == NULL){
                return;
        }

        DeleteTree(head->left);
        DeleteTree(head->right);
        delete head;
}




