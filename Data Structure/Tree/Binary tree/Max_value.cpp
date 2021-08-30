int getMax(struct Node* head){
        if(head == NULL){
                return INT_MIN;
        }

        int head_data = head->data;
        int left_data = getMax(head->left);
        int right_data = getMax(head->right);

        return (left_data > head_data) ?
                 (left_data >right_data)  ? head_data : left_data
                 : (head_data > right_data) ? head_data : right_data;

        //If you won't able to understand the upper ternary operator
        //then comment out below this line code.
        //Don't forget to comment in the upper code.
        /*if(left_data > head_data){
                head_data = left_data;
        }
        if(right_data > head_data){
                head_data = right_data;
        }
        return head_data;*/
}

