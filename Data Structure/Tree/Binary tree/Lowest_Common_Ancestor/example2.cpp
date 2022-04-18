class LowestCommonAncestor {
    public:
    Node* lowestCommonAncestor(Node* root, Node* p , Node* q) {
        if(root == NULL) return NULL;
        if(root->data == p->data || root->data == q->data) return root;
        Node* left = lowestCommonAncestor(root->left, p, q);
        Node* right = lowestCommonAncestor(root->right, p, q);
        if(left != NULL && right != NULL) return root;
        if(left == NULL && right == NULL) return NULL;
        return left != NULL ? left : right;
    }
    
};
