// inorder traversal of tree.

void iterative(Node* root) {
        stack<Node*> s;
        if(root == NULL) {
                return; 
        } else {
                s.push(root);
        }

        while(!s.empty()) {
                Node* temp = s.top();
                cout << temp->val << endl;
                s.pop();
                if(temp->right != NULL) s.push(temp->right); 
          
                // In inorder traversal we have to go the left node first, so as stack work as LIFO, means 
                // the last pushed element will pop first, so we push the left element last.
          
                if(temp->left != NULL) s.push(temp->left);
        }
}
