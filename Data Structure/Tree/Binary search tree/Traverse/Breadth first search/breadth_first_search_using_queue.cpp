//https://www.youtube.com/watch?v=86g8jAQug04&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=33

void level_order(struct Node* head){
        if(head == NULL){
                return;
        }

        queue<Node *> q;
        q.push(head);
        while(!q.empty()){
                struct Node* head = q.front();
                cout<<head->data<<" ";
                if(head->left != NULL) q.push(head->left);
                if(head->right != NULL) q.push(head->right);
                q.pop();
        }
}

