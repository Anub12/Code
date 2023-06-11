#include <iostream>
#include <queue>
#include <algorithm>
#include "TreeNode.h"
using namespace std;

TreeNode<int>* Input(){
    int rootData;
    cout << "Enter root data: " << endl;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int> (rootData);
    
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
            cout << "Enter " << i << "th child of" << front->data << endl;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

bool structurallyIndentical(TreeNode<int>* root1, TreeNode<int>* root2) {
    if(root1 == NULL && root2 == NULL)
        return true;
    
    if(root1->data == root2->data) {
        for(int i = 0; i < max(root1->children.size(), root2->children.size()); i++) {
            if(root1->children[i]->data == root2->children[i]->data)
                return true;
        }
    }
    return false;
}

// you can reprogram this function anytime...

int main() {
    cout << "Enter Tree 1" << endl;
    TreeNode<int>* root1 = Input();
    cout << endl << "Enter Tree 2" << endl;
    TreeNode<int>* root2 = Input();

    if(structurallyIndentical) 
        cout << "both trees are structurally Identical" << endl;
    else
        cout << "both trees aren't structurally Identical" << endl;


    return 0;
}