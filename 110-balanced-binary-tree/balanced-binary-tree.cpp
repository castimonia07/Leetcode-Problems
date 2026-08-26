/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root){
        if(root==NULL) return 0;
        TreeNode* node=root;
        int lh=height(node->left);
        int rh=height(node->right);
        return 1+max(lh,rh);
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        TreeNode* node=root;
        int lh= height(node->left);
        int rh= height(node->right);
        if(abs(lh-rh)>1) return false;
        if(!isBalanced(node->left) || !isBalanced(node->right) ) return false;
        return true;
    }
};