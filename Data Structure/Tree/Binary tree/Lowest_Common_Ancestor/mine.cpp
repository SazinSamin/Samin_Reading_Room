// https://www.youtube.com/watch?v=13m9ZCB8gjw


class LowestCommonAncestor {
    public:
    set<Node*> v1;
    set<Node*> v2;

    Node* lowestCommonAncestor(Node* root, Node* p, Node* q) {
        entryList(root, p, 1);
        entryList(root, q, 2);

        for(auto it = v1.begin(); it != v1.end(); it++) {
                cout << (*it)->data << " ";
        }
        cout << endl;
        for(auto it = v2.begin(); it != v2.end(); it++) {
            cout << (*it)->data << " ";
        }
        cout << endl;


        for(auto it = v1.begin(); it != v1.end(); it++) {
            if(v2.find((*it)) != v2.end()) {
                return *it;
            }
        }

        return NULL;

    }


    void entryList(Node* root, Node* p, int flag) {
        if(root == NULL) return;
        if(flag == 1) {
            v1.insert(root);
        } else {
            v2.insert(root);
        }
        if(root->data == p->data) {
            return;
        }
        if(p->data < root->data) {
            entryList(root->left, p, flag);
        } else {
            entryList(root->right, p, flag);
        }
    }
};
