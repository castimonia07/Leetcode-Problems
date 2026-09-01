/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == NULL)
            return ans;

        queue<pair<TreeNode*, pair<int, int>>> q;
        q.push({root, {0, 0}});

        map<int, vector<pair<int, int>>> mpp;

        while (!q.empty()) {
            TreeNode* node = q.front().first;
            int col = q.front().second.first;
            int row = q.front().second.second;

            q.pop();
            if (node->left != NULL)
                q.push({node->left, {col - 1, row + 1}});
            if (node->right != NULL)
                q.push({node->right, {col + 1, row + 1}});

            mpp[col].push_back({row, node->val});
        }
        for (auto it : mpp) {
            sort(it.second.begin(), it.second.end());

            vector<int> temp;
            for (auto p : it.second) {
                temp.push_back(p.second);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};