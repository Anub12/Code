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

bool ContainsX(TreeNode<int>* root, int x) {
    if(root == NULL)
        return false;
    if(root->data == x) {
        return true;
    }
    for(int i = 0; i < root->children.size(); i++)
        if(ContainsX(root->children[i], x))
            return true;
    return false;
}

int main() {
    cout << "Contains X" << endl;
    TreeNode<int>* root = Input();
    if(ContainsX(root, 3))
        cout << "True" << endl;
    else
        cout << "False" << endl;


    return 0;
}