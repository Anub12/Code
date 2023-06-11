#include <iostream>
#include <vector>
#include <queue>
#include "TreeNode.h"
using namespace std;

TreeNode<int>* deleteleafNodes(TreeNode<int>* root) {
    if(root == NULL) {
        return NULL;
    }
    if(root->children.size() == 0) {
        delete root;
        return NULL; 
        // root node itself is a leaf node, then it will delete it and return NULL;
    }
    for(int i = 0; i < root->children.size(); i++) {
        TreeNode<int>* child = root->children[i];
        if(child->children.size() == 0) {
            delete child;
            for(int j = i; j < root->children.size() - 1; j++) {
                root->children[j] = root->children[j+1];
            }
            i--;
        }
    }
    // for loop for recursive call.
    for(int i = 0; i < root->children.size(); i++){
        root->children[i] = deleteleafNodes(root->children[i]);
    }
    return root;
}

TreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout << "Etner root data " << endl;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() != 0){
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

/* void printTree(TreeNode<int>* root) {
    if(root == NULL) {
        return;
    }
    cout << root->data << ":";
    for(int i = 0; i < root->children.size(); i++)
} */

int main() {
    TreeNode<int>* root = takeInputLevelWise();


    return 0;
}