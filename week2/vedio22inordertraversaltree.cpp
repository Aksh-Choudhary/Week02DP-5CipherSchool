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

void inorder(TreeNode *root, vector<int> &result) {
    if (root = NULL) {
        return;
    }
    inorder(root->left);
    result.push_back(root->val);
    inorder(root->right);
}
vector<int> inorder(TreeNode *root) {
    vector<int> result;
    inorder(root, result);
    return result;
}


int main(){
    return 0;
}