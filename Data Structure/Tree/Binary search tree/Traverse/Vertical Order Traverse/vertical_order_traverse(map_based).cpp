// https://www.geeksforgeeks.org/print-binary-tree-vertical-order-set-2/
#include <iostream>
#include<vector>
#include<map>
using namespace std;

struct Node{
	int data;
	struct Node *left, *right;
};
//helper function
Node* newNode(int data);


void mapOrder(struct Node* head, map<int, vector<int>> &m, int hd){
	if(head ==  NULL){
		return;
	}
	
	m[hd].push_back(head->data);

	mapOrder(head->left, m, hd - 1);
	mapOrder(head->right, m, hd+1);
}


void verticalOrder(struct Node *head){
	
	int hd = 0;
	map<int, vector<int>> m;
	mapOrder(head, m, hd);

	map<int, vector<int>> :: iterator it;

	for(it = m.begin(); it != m.end(); it++){
		for(int i=0; i<it->second.size(); i++){
			cout<<it->second[i]<<" ";
		}
		cout<<"\n";
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
