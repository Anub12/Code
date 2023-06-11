#include <iostream>
#include <queue>
#include "TreeNode.h"
using namespace std;

// Do this question as homework

TreeNode<int>* takeInputLevelWise(){
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

void findNextGreaterElement(TreeNode<int>* root, int x, TreeNode<int>** result) {
    if (root == NULL)
        return;

    if(root->data > x) {
        if(!(*result) || (*result)->data > root->data) {
            *result = root;
        }
    }

    int childCount = root->children.size();
    for(int i = 0; i < childCount; i++) {
        findNextGreaterElement(root->children[i], x, result);
    }
    return;
}

int main(){
    TreeNode<int>* root = takeInputLevelWise();
    TreeNode<int>* result = NULL;
    findNextGreaterElement(root, 4, &result);
    printTree(root);
    cout << "The output is: " << result->data << " ";


    return 0;
}