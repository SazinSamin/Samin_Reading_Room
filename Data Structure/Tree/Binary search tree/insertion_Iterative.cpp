/*

struct Node {
        int val;
        Node* left;
        Node* right;
};

*/


Node* searchBSTIterative(Node* root, int val) {
        if(root == NULL) return new Node(val);
        Node* curr = root;
        Node* prev = NULL;
        
        while(curr) {
                if(val < curr->val) {
                        prev = curr;
                        curr = curr->left;
                } else {
                        prev = curr;
                        curr = curr->right;
                }
        }
        if(val < prev->val) prev->left = new Node(val);
        else prev->right = new Node(val);
        return root;
}
