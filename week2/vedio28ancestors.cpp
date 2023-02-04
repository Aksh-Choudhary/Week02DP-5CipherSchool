#include <bits/stdc++.h>

using namespace std;

class TreeNode{

    public:
    
    int val;
    
    TreeNode *left;
    
    TreeNode *right;
    
    TreeNode *random;
    
    TreeNode(): val(0), left(nullptr), right(nullptr) {}
    
    TreeNode(int x): val(x), left (nullptr), right (nullptr) {}
    
    TreeNode(int x, TreeNode *left, TreeNode *right): val(x), left (left), right(right) ()
};

TreeNode* leastCommonAncestors (TreeNode* root, const int &l, const  int &r) {

    if (root == NULL){
        return NULL;
    }
    if (root->val < 1) {
        return leastCommonAncestors (root->right, l, r);
    } else if (root->val > r) {
        return leastCommonAncestors (root->left, 1, r);
    } else {
        return root;
    }
}


int main(){
    
    return 0;
}
    
    
    
    