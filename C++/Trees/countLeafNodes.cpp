#include <iostream>
#include <queue>
#include "TreeNode.h"
using namespace std;

TreeNode<int>* Input() {
    int rootData;
    cout << "Enter root data: " << endl;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);

    while(!pendingNodes.empty()) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter num of children of " << front->data << endl;
        int numChild;
        cin >> numChild;
        for(int i = 0; i < numChild; ++i) {
            int childData;
            cout << "Enter " << i << " the child of " << front->data << endl;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int> (childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

void printTree(TreeNode<int>* root) {
    if(root == NULL)
        return;
    cout << root->data << ":";
    for(int i = 0; i < root->children.size(); ++i) {
        cout << root->children[i]->data << ", ";
    }
    cout << endl;
    for(int i = 0; i < root->children.size(); ++i) {
        printTree(root->children[i]);
    }
}

int countLeaves(TreeNode<int>* root) {
    int count = 0;
    if(root == NULL) {
        return 0;
    }

    for(int i = 0; i <= root->children.size(); ++i) {
        if(root->children[i] == NULL) {
            return 1;
        }
        return count += countLeaves(root->children[i]);
    }
}

// It is throwing some error.... I don't know why???

int main() {
    TreeNode<int>* root = Input();
    int z = countLeaves(root);
    cout << "Total number of leaf nodes are: " << z << endl;

    return 0;
}