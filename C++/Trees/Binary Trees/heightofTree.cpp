#include <bits/stdc++.h>
#include "BinaryTreeNode.h"
using namespace std;

BinaryTreeNode<int>* Input(){
    int rootData;
    cout << "Enter root data: " << endl;
    cin >> rootData;
    if(rootData == -1)
        return NULL;
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);

    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty()) {
        BinaryTreeNode<int>* front = q.front();
        q.pop();

        cout << "Enter value of left child of " << front->data << endl;
        int leftChildData;
        cin >> leftChildData;
        if(leftChildData != -1) {
            BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftChildData);
            front->left = child;
            q.push(child);
        }

        cout << "Enter value of right child of " << front->data << endl;
        int rightChildData;
        cin >> rightChildData;
        if(rightChildData != -1) {
            BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rightChildData);
            front->right = child;
            q.push(child);
        }
    }
    return root;
}

void printTree(BinaryTreeNode<int>* root){
    if(root == NULL)
        return;
    cout << root->data << ":";
    if(root->left != NULL) {
        cout << "L" << root->left->data << " ";
    }
    if(root->right != NULL) {
        cout << "R" << root->right->data << " ";
    }
    cout << endl;
    printTree(root->left);
    printTree(root->right);
}

int heightOfTree(BinaryTreeNode<int>* root) {
    if(root == NULL)
        return 0;
    return max(heightOfTree(root->left)+1, heightOfTree(root->right)+1);
}

int main(){
    BinaryTreeNode<int>* root = Input();
    printTree(root);
    cout << "Height of Tree is: ";
    cout << heightOfTree(root);

    return 0;
}