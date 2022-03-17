int Height(struct Node* head){
        if(head == NULL){
                return 0;
        }
        return 1 + max(Height(head->right), Height(head->left));
}


void printOrder(Node* head, int level) {
        if(head == NULL) return;
        if(level == 1) {
                cout << head->val << endl;
        };
        if(level > 1) {
                printOrder(head->left, level - 1);
                printOrder(head->right, level - 1);
        }
}


void printLevelOrder(Node* head) {
        int h = Height(head);
        for(int i = 1; i <= h; i++) {
                printOrder(head, i);
        }
}
