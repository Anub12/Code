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

int height(BinaryTreeNode<int>* root) {
    if(root == NULL)
        return 0;
    return max(height(root->left)+1, height(root->right)+1);
}

bool BalancedBT(BinaryTreeNode<int>* root) {
    if(root == NULL)
        return 1;
    int lh = height(root->left);
    int rh = height(root->right);
    /* height differs at most 1 */
    if(lh-rh <= 1 && BalancedBT(root->left) && BalancedBT(root->right)){
        return true;
    }
    else
        return false;
}

int main(){
    BinaryTreeNode<int>* root = Input();
    if(BalancedBT(root))
        cout << "True";
    else
        cout << "False";


    return 0;
}