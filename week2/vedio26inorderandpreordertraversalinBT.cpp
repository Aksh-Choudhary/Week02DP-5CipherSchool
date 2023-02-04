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

class TreeNode{
    public:
    int val;
    TreeNode *left;
    TreeNode right;
    TreeNode(): val(0), left (nullptr), right(nullptr) {} 
    TreeNode(int x): val(x), left (nullptr), right (nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right): val(x), left (left), right(right) {}
};

int find(vector<int> Inorder, int start, int end, int x) {
    for(int i = start; i <= end; i++) {
        if (inorder[1] x) {
            return -1;
        }
    }    
TreeNode* buildTree(const vector<int> &preorder, const vector<int> &inOrder, int start, int end, int &cur){
    if (start > end) { 
        return NULL;
    }

    TreeNode* newNode = new TreeNode(preOrder[curr]);
    curr++;
    if (start == end) {
        return newNode; 
        
    } else {
        int index find (inOrder, start, end, newNode->val);
        newNode->left = buildTree(preOrder, inOrder, start, index-1, curr);
        newlode->right = buildTree(preorder, inorder, Index 1, end, curr);
    }
}


int main()
{
    return 0;
}