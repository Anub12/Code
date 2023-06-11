#include <bits/stdc++.h>
#include "BinaryTreeNode.h"
#include "BinarySearchTree.h"
using namespace std;

BinaryTreeNode<int>* Input(){
    int rootData;
	cout << "Enter root data" << endl;
	cin >> rootData;
	if (rootData == -1) {
		return NULL;
	}

	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);

	queue<BinaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while (pendingNodes.size() != 0) {
		BinaryTreeNode<int>* front = pendingNodes.front();
		pendingNodes.pop();
		cout << "Enter left child of " << front->data << endl;
		int leftChildData;
		cin >> leftChildData;
		if (leftChildData != -1) {
			BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftChildData);
			front->left = child;
			pendingNodes.push(child);
		}
		cout << "Enter right child of " << front->data << endl;
		int rightChildData;
		cin >> rightChildData;
		if (rightChildData != -1) {
			BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rightChildData);
			front->right = child;
			pendingNodes.push(child);
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

void findPreSuc(BinaryTreeNode<int>* root, BinaryTreeNode<int>* pre, BinaryTreeNode<int>* suc, int key){
    if(root == NULL)
        return;
    if(root->data == key){
        if(root->left != NULL){
            BinaryTreeNode<int>* temp = root->left;
            while(temp->right)
                temp = temp->right;
            pre = temp;
        }
        if(root->right != NULL){
            // BinaryTreeNode<int>* temp = 
        }
    }
}

int main(){


    return 0;
}