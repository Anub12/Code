#include <bits/stdc++.h>
#include "BinaryTreeNode.h"
using namespace std;

BinaryTreeNode<int>* Input(){
    int rootData;
    cout << "Enter root data: " << endl;
    cin >> rootData;
    if(rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);

    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() != 0){
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

/* pair<int, int> minMax(BinaryTreeNode<int>* root) {
    pair<int, int> p;
    if(root == NULL){
        p.first = INT_MAX; // p.first represents minimum value
        p.second = INT_MIN; // p.second represents maximum value
        return p;
    }
    p.first = findMin(root);
    p.second = findMax(root);
    return p;
} */

int findMax(BinaryTreeNode<int>* root){
    if(root == NULL)
        return INT_MIN;
    int res = root->data;
    int lres = findMax(root->left);
    int rres = findMax(root->right);
    if(lres > res)
        res = lres;
    if(rres > res)
        res = rres;
    return res;
}

int findMin(BinaryTreeNode<int>* root){
    if(root == NULL)
        return INT_MAX;
    int res = root->data;
    int lres = findMin(root->left);
    int rres = findMin(root->right);
    if(lres < res)
        res = lres;
    if(rres < res)
        res = rres;
    return res;
}

int main() {
    BinaryTreeNode<int>* root = Input();
    printTree(root);
    int z = findMax(root);
    cout << "max value: " << z;
    int y = findMin(root);
    cout << "\nmin value: " << y;

    return 0;
}
