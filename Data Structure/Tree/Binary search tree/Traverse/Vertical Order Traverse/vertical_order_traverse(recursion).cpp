// explaination -> https://www.youtube.com/watch?v=PQKkr036wRc&t=184s
// code reference -> https://www.geeksforgeeks.org/print-binary-tree-vertical-order/


#include <iostream>
using namespace std;

struct Node{
	int data;
	struct Node *left, *right;
};

//helper function
Node* newNode(int data);



void findMinMax(struct Node* temp, int *min, int *max, int hd){
	if(temp == NULL){
		return;
	}

	if(hd < *min){
		*min = hd;
	}else if(hd > *max){
		*max = hd;
	}

	findMinMax(temp->left, min, max, hd-1);
	findMinMax(temp->right, min, max, hd+1);
}


void printVerticalOrder(struct Node* temp, int level, int hd){
        if(temp == NULL){
                return;
        }

        if(hd == level){
                cout<<temp->data<<" ";
        }

        printVerticalOrder(temp->left, level, hd-1);
        printVerticalOrder(temp->right, level, hd+1);
}


void verticalOrder(struct Node *temp){
	int min = 0, max = 0, hd = 0;

	findMinMax(temp, &min, &max, hd);

        cout<<"\nVertical print: "<<"\n";
        for(int i=min; i<=max; i++){
                printVerticalOrder(temp, i, hd);
        }
}




int main(){
	// Create binary tree shown in above figure
	Node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->left = newNode(6);
	root->right->right = newNode(7);
	root->right->left->right = newNode(8);
	root->right->right->right = newNode(9);

	cout << "Vertical order traversal is \n";
	verticalOrder(root);

	return 0;
}



Node* newNode(int data){
	Node *temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}
