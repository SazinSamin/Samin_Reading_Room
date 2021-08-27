int match(struct Node* head, int e){
        if(head == NULL){
                return -1;
        }

        int hs = head->data;
        int ls = match(head->left, e);
        int rs = match(head->right, e);

        if(hs == e || ls == e || rs == e){
                hs = e;
        }else{
                hs = -1;
        }
        return hs;
}

