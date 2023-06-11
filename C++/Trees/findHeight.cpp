#include <iostream>
#include <queue>
#include "TreeNode.h"
using namespace std;

int findHeight(TreeNode<int>* root) {
    if(root == NULL)
        return 0;

    int Height = 0;
    for(int i = 0; i < root->children.size(); i++) {
        Height++;
        findHeight(root->children[i]);
    }
    return Height + 1;
}

TreeNode<int>* Input(){
    int rootData;
    cout << "Enter root data" << endl;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while(pendingNodes.size() != 0) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter num of children of " << front->data << endl;
        int numChild;
        cin >> numChild;
        for(int i = 0; i < numChild; i++) {
            int childData;
            cout << "Enter " << i << "th child of " << front->data << endl;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

void printTree(TreeNode<int>* root) {
    if (root == NULL)
        return;

    cout << root->data << ":";
    for(int i = 0; i < root->children.size(); i++) {
        cout << root->children[i]->data << ",";
    }
    cout << endl;
    for(int i = 0; i < root->children.size(); i++) {
        printTree(root->children[i]);
    }
}

int main() {
    TreeNode<int>* root = Input();
    int Height = findHeight(root);
    printTree(root);
    cout << "Height of the tree is: " << Height;

    return 0;
};