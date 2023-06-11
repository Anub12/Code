#include <iostream>
#include <queue>
#include "TreeNode.h"
using namespace std;

TreeNode<int>* takeInputLevelWise() {
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
            TreeNode<int>* child = new TreeNode<int> (childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

void printAtLevelK(TreeNode<int>* root, int k) {
    if(root == NULL){
        return;
    }

    if(k == 0) {
        cout << root->data << " ";
        return;
    }

    for(int i = 0; i < root->children.size(); i++) {
        printAtLevelK(root->children[i], k-1);
    }
}

// 1 3 2 3 4 2 5 6 7 8 0 0 0 0 1 9 0

int main(){
    TreeNode<int>* root = takeInputLevelWise();
    cout << "Level 2: " << endl;
    printAtLevelK(root, 2);


    return 0;
}