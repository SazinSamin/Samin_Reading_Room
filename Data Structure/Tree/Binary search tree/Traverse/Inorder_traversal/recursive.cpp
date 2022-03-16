void traverse(Node* root) {
        if(root == NULL) {
                return;
        }
        traverse(root->left);
        cout << root->val << endl;
        traverse(root->right); 
}
