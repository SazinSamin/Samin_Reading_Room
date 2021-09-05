// Postorder traversal read the data from the leaf node & go up to the parent node. 
// Postorder tree use for delete the complete tree. go to link for that.
// https://github.com/SazinSamin/Samin_Reading_Room/tree/main/Data%20Structure/Tree/Binary%20search%20tree/Delete%20Full%20Tree


void postorder(struct Node *head){
        if(head == NULL){
                return;
        }

        postorder(head->left);
        postorder(head->right);
        cout << head->data << " ";
}
