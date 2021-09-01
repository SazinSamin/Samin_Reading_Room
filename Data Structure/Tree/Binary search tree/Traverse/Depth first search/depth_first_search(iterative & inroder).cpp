void level_order(struct Node* head){
        if(head == NULL){
                return;
        }

        stack<Node *> q;
        int finish = 0;
        struct Node* current = head;
        while(!finish){
                while(current != NULL){
                        q.push(current);
                        current = current->left;
                }

                if(current == NULL){
                        if(!q.empty()){
                                struct Node* topNode = q.top();
                                cout<<topNode->data<<" ";
                                current = topNode->right;
                                q.pop();
                        }else{
                                finish = 1;
                        }
                }
        }    
}
