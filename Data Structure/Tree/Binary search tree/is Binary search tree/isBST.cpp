//https://www.youtube.com/watch?v=yEwSGhSsT0U

bool isSubTreeLesser(struct Node* head, int data){
        if(head == NULL){
                return true;
        }
        if(head->data < data && isSubTreeLesser(head->left, data) && isSubTreeLesser(head->right, data)){
                return true;
        }
        return false;
}

bool isSubTreeGreater(struct Node* head, int data){
        if(head == NULL){
                return true;
        }

        if(head->data > data && isSubTreeGreater(head->left, data) && isSubTreeGreater(head->right, data)){
                return true;
        }
        return false;
}


bool isBst(struct Node* head){
        if(head == NULL){
                return true;
        }

        if(isSubTreeLesser(head->left, head->data) && isSubTreeGreater(head->right, head->data)
                && isBst(head->left) && isBst(head->right)){
                        return true;
                }
       
        return false;
}

