#include <iostream>
#include <queue>
#include "TreeNode.h"
using namespace std;

TreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout << "Enter root data: " << endl;
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

void maxSumUtil(TreeNode<int>* root, TreeNode<int>** resNode, int* maxSum) {
    if(root == NULL)
        return;
    int currSum = root->data;
    int count = root->children.size();
    for(int i = 0; i < count; i++) {
        currSum += root->children[i]->data;
        maxSumUtil(root->children[i], resNode, maxSum);
    }

    if(currSum > *maxSum) {
        *resNode = root;
        *maxSum = currSum;
    }
    return;
} // This is an important utility function which helps maxSum funtions parallely.

int maxSum(TreeNode<int>* root) {
    TreeNode<int>* resNode;
    int maxSum = 0;
    maxSumUtil(root, &resNode, &maxSum);
    return resNode->data;
}

/* TreeNode<int>* maxSum2(TreeNode<int>* root, TreeNode<int>** resNode, int* maxSum){
    if(root == NULL)
        return NULL;
    int currSum = root->data;
    int count = root->children.size();
    for(int i = 0; i < count; i++) {
        currSum += root->children[i]->data;
        maxSum2(root->children[i], resNode, maxSum);
    }
    if(currSum > *maxSum){
        *resNode = root;
        *maxSum = currSum;
    }
    return *resNode->data;
}
 */
int main(){
    TreeNode<int>* root = takeInputLevelWise();
    int z = maxSum(root);
    cout << "The Node with maximum Sum is: " << z; 

    return 0;
}