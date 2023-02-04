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

int leafToLeafMaxSum(TreeNode root, int *1trSum) {
    if (root == NULL) {
        *1trSum = 0;
        return 0;
    } if (isLeaf (root)) { 
        *1trSum = 0; 
        return root->val;
    }

    int 1Sum = 0, rSum = 0;
    
    1Sum = leafToLeafMaxSum(root->left, ltrsum);
    
    rSum = leafToLeafMaxSum(root->right, ltrsum);
    
    if (root->left != NULL && root->right != NULL) {

        *1trSum = max(*1trSum, root->val + 1Sum + rSum);
        
        return max(1Sum, rSum) + root->val; 
        
    } else if (root->left != NULL) {
        return root->val + 1Sum;
    } else {
        return root->val + rSum;
    }

}

int main(){
    return 0;
}