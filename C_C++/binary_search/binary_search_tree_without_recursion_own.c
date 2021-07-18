#include<iostream>
using namespace std;

struct Node{
        int data;
        struct Node *left;
        struct Node* right;
};
struct Node* head;

void treeTraverse(struct Node* tree){
        if(tree == NULL){
                return;
        }
        treeTraverse(tree->left);
        printf("%d ", tree->data);
        treeTraverse(tree->right);
}



void insert(int data){

        struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
        temp->data = data;
        temp->left = NULL;
        temp->right = NULL;

        if(head == NULL){
                head = temp;
        }else{
                struct Node* temp2 = head;
                struct Node* temp3 = head;
                while(temp2 != NULL){
                        if(data <= temp2->data){
                                temp3 = temp2;
                                temp2 = temp2->left;
                        }else{
                                temp3 = temp2;
                                temp2 = temp2->right;
                                
                        }
                }
                if(data <= temp3->data){
                        temp3->left = temp;
                }else{
                        temp3->right = temp;
                }
                struct Node* test = head;
                //printf("Ok");
        }

}

int main(){

        head = NULL;
        int array[10] = {3,5,6,7,3,8,5,1,9,4};
        for(int i=0; i<10; i++){
                insert(array[i]);
        }

        treeTraverse(head);
}
