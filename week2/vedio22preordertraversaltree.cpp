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

vector<int> preorder (TreeNode* root) {
    if (root == NULL) {
        return {};
    }
    vector<int> result;
    stack<TreeNode *> S;
    TreeNode *temp = root;
    while (true) { 
        while (temp != NULL) {
            result.push_back(temp->val);
            S.push(temp);
            temp = temp->left;
        }
        if (S.empty()) {
            break;
        }
        
        temp = S.top(); 
        S.pop();
        temp-temp->right;
    }
    return result;
}

int main(){
    return 0;
}