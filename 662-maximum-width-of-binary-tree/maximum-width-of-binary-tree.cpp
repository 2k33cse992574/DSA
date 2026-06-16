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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*, unsigned long long>> q;
        int maxi = 0;
        q.push({root, 0});
        while (!q.empty()) {
            int size = q.size();
            int si = q.front().second;
            int ei = q.back().second;
            maxi = max(maxi, ei - si + 1);
            for (int i = 0; i < size; i++) {
                pair<TreeNode*, unsigned long long> p = q.front();
                q.pop();
                TreeNode* node = p.first;
                unsigned long long j = p.second;
                if (node->left) {
                    q.push({node->left, 2 * j + 1});
                }
                if (node->right) {
                    q.push({node->right, 2 * j + 2});
                }
            }
        }
        return maxi;
    }
};