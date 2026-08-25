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
        int lh=height(root->left);
        int rh=height(root->right);
        return 1+max(lh,rh);
    }
    bool isBalanced(TreeNode* root) {
        TreeNode* node=root;
        if(node==NULL) return true;
        int left=height(node->left);
        int right=height(node->right);
        if(abs(left-right)>1) return false;
        bool l=isBalanced(node->left);
        bool r=isBalanced(node->right);
        if(!l||!r) return false;
        return true;
    }
};