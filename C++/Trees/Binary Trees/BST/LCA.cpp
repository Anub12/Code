#include <bits/stdc++.h>
#include "BinarySearchTree.h"
using namespace std;

BinaryTreeNode<int>* Input() {
	int rootData;
	cout << "Enter root data" << endl;
	cin >> rootData;
	if (rootData == -1) {
		return NULL;
	}

	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);

	queue<BinaryTreeNode<int>*> q;
	q.push(root);
	while (q.size() != 0) {
		BinaryTreeNode<int>* front = q.front();
		q.pop();
		cout << "Enter left child of " << front->data << endl;
		int leftChildData;
		cin >> leftChildData;
		if (leftChildData != -1) {
			BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftChildData);
			front->left = child;
			q.push(child);
		}
		cout << "Enter right child of " << front->data << endl;
		int rightChildData;
		cin >> rightChildData;
		if (rightChildData != -1) {
			BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rightChildData);
			front->right = child;
			q.push(child);
		}
	}
	return root;
}

void printTree(BinaryTreeNode<int>* root) {
	if (root == NULL) {
		return;
	}
	cout << root->data << ":";
	if (root->left != NULL) {
		cout << "L" << root->left->data;
	}

	if (root->right != NULL) {
		cout << "R" << root->right->data;
	}
	cout << endl;
	printTree(root->left);
	printTree(root->right);
}

BinaryTreeNode<int>* findLCA(BinaryTreeNode<int>* root, int a, int b){
    if(root == NULL)
        return NULL;
    
    if(root->data > a && root->data > b)
        return findLCA(root->left, a, b);
    
    if(root->data < a && root->data < b)
        return findLCA(root->right, a, b);
    return root;
}

int main(){
    BinaryTreeNode<int>* root = Input();
    int a = 10, b = 14;
    BinaryTreeNode<int>* temp = findLCA(root, a, b);
    cout << "LCA is: " << temp->data << "\n";

    return 0;
}