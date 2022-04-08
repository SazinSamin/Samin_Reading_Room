// https://www.educative.io/edpresso/how-to-invert-a-binary-tree
// https://leetcode.com/problems/invert-binary-tree/


void invert(struct Node* head){
    if(!root) return root;
        
    invert(root->left);
    invert(root->right);
        
    Node* temp = root->left;
    root->left = root->right;
    root->right = temp;
        
    return root;
}

