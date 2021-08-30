#include<bits/stdc++.h>
using namespace std;
struct Node{
        int data;
        struct Node* right;
        struct Node* left;
};
struct Node* head;

struct Node* getNode(int data){
        struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
        temp->data = data;
        temp->right = NULL;
        temp->left = NULL;
        return temp;
}


struct Node* insert(int data, struct Node* head){
        struct Node* node = getNode(data);

        if(head == NULL){
                head = node;
                return head;
        }

        if(data < head->data){
                head->left = insert(data, head->left);
        }else{
                head->right = insert(data, head->right);
        }

        return head;
}

void traverse(struct Node* head){
        if(head == NULL){
                return;
        }

        traverse(head->left);
        cout<<head->data<<" ";
        traverse(head->right);
}


int getTreeSum(struct Node* head){
        if(head == NULL){
                return 0;
        }

        int l = getTreeSum(head->left);
        int r = getTreeSum(head->right);

        return head->data + l + r;
}

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



int getHeight(struct Node* head){
        if(head == NULL){
                return 0;
        }

        int left_h = getHeight(head->left);
        int right_h = getHeight(head->right);

        return 1 + max(left_h, right_h);
}


void invert(struct Node* head){
        if(head == NULL){
                return;
        }else{
                struct Node* temp;

                invert(head->left);
                invert(head->right);

                temp = head->left;
                head->left = head->right;
                head->right = temp;
        }
}


int main(){
        struct Node* node = NULL;
        node = insert(10, node);
        node = insert(12, node);
        node = insert(13, node);
        node = insert(32, node);
        node = insert(42, node);
        node = insert(2, node);
        node = insert(3, node);
        node = insert(5, node);

        traverse(node);
        cout<<"\nSum: "<<getTreeSum(node);
        cout<<"\nMax: "<<getMax(node);
        cout<<"\nHeight: "<<getHeight(node);
        cout << "\nFound: " <<match(node, 32);
        invert(node);
        cout<<"\nInvert: ";
        traverse(node);
}
