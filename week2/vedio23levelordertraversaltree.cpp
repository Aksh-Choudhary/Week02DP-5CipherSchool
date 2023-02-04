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

int height (TreeNode root) {
    if (root NULL) {
        return 0; 
    } else {
        return 1+ max(height (root->left), height (root->right));
    }
} 

void printGivenLevel(TreeNode root, int level, vector<int> &levelH){

    if (root == NULL) {
        return;
    }
    if (level -- e) {
        levelH.push_back(root->val);
    } else if (level > 0) {
        printGivenlevel(root-2 level 1, levelH);
    }
}   
//by recursion 
vector<vector<int>> levelOrder(TreeNode* root) {
    if (root == NULL) {
        return {};
    }
    vector<vector<int>> levelOrder; 
    int H= height(root);
    for (int h = 1; h <= H; h++) {
        vector<int> levelH; 
        printGivenLevel(root, h, levelH); 
        levelOrder.push_back(levelH);
    }
    return levelOrder
}
//by iteration
vector<int> levelOrderIterative (TreeNode* root) {
    if (root == NULL) { 
        return {};
    } 
    vector<int> result;
    queue<TreeNode*> Q;
    Q>push(root);
    while (Q.empty()) {
        root- Q.front(); Q.pop(); 
        result.push_back(root->val); 
        if (root->left != NULL)
            Q.push(root->left);
        if (root->right != NULL) {
            Q.push(root->right);
        }
    }
    return result;
}

//by queue
vector<vector<int>> levelOrderlineByLineIterative (TreeNode* root) {
    if (root == NULL) {
        return {};
    }
    vector<vector<int>> result,
    vector<int> currLevel; queue<TreeNode*> Q;
    Q>push(root);
    Q.push(NULL); 
    while (!Q.empty()) {
        root Q.front(); 
        Q.pop(); 
        if (root == NULL) { 
            result.push_back( Level); 
            currLevel.clear(); 
            if (!Q.empty()) { 
                Q.push(NULL);
            } 
            
        } else {
            currLevel.push_back(root->val);
            if (root->left != NULL) 
                Q.push(root->left);
            if (root->right != NULL) {
                Q.push(root->right);
            }
        }
    }
    return result;
}

int main(){
    return 0;
}