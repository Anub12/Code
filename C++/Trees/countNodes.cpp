#include <iostream>
#include <queue>
#include "TreeNode.h"
using namespace std;

TreeNode<int>* Input(){
    int rootData;
    cout << "Enter root data " << endl;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while(!pendingNodes.empty()) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter number of children of " << front->data << endl;
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

void deleteTree(TreeNode<int>* root) {
    for(int i = 0; i < root->children.size(); i++) {
        deleteTree(root->children[i]);
    }
    delete root;
}

int countNodes(TreeNode<int>* root) {
    if(root == NULL) 
        return 0;
    
    int ans = 1;
    for(int i = 0; i < root->children.size(); i++) {
        ans += countNodes(root->children[i]);
    }
    return ans;
}

int main(){
    TreeNode<int>* root = Input();
    printTree(root);
    int z = countNodes(root);
    cout << "Total number of nodes are: " << z << endl;
    deleteTree(root);


    return 0;
}