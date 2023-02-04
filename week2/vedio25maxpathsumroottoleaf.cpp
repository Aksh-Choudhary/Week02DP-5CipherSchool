#include <bits/stdc++.h>

using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode *left;
    TreeNode right;
    TreeNode(): val(0), left (nullptr), right(nullptr) {} 
    TreeNode(int x): val(x), left (nullptr), right (nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right): val(x), left (left), right(right) {}
}; 

bool isLeaf(TreeNode *root) {
    return(root !=NULL && root->left = NULL && root->right == NULL);
}

void maxSumPath(TreeNode* root, int sum, int maxSum) {
    if (root NULL) {
        return;
    }
    sum root->val; 
    if (isLeaf(root)) {
        maxSum = max(maxsum, sum);
        return;
    } else {
        maxSunPath(root->left, sum, maxSum);
        maxSumPath(root->right◄◄ maxSum);
    }
}    

int maxPath(TreeNode* root) { 
    int maxSum = 0;
    maxSumPath(root, 0, maxSun);
    return maxSum;

} 

int main(){
    return 0;
}