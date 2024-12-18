#include <iostream>
#include <queue>
#include "TreeNode.h"
using namespace std;

void preOrder(TreeNode<int>* root) {
    if(root == NULL) 
        return;
    
    cout << root->data << " ";
    for(int i = 0; i < root->children.size(); i++) {
        preOrder(root->children[i]);
    }
}

void postOrder(TreeNode<int>* root) {
    if(root == NULL) 
        return;
    for(int i = 0; i < root->children.size(); i++) {
        postOrder(root->children[i]);
    }
    cout << root->data << " ";
}

/* void inOrder(TreeNode<int>* root){
    if(root == NULL)
        return;
    int total = root->children.size();
    for(int i = 0; i < total-1; i++) {
        inOrder(root->children[i]);
    }
    cout << root->data << " ";
    inOrder(root->children[total-1]);
} segmentation fault */

// code for inOrder vector

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

int main(){
    TreeNode<int>* root = Input();
    cout << "PreOrder Traversal: ";
    preOrder(root);
    cout << endl << "PostOrder Traversal: ";
    postOrder(root);
/*     cout << endl << "InOrder Traversal:";
    inOrder(root); */

    return 0;
}