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
    int maxDepth(TreeNode* root) {

        if(!root) return 0;

        queue<TreeNode*> q;
        q.push(root);
        int d = 0;

        while (!q.empty()) {

            int n = q.size();

            for (int i = 0; i < n; i++) {
                TreeNode* num = q.front();

                q.pop();
                if (num->left)
                    q.push(num->left);
                if (num->right)
                    q.push(num->right);
            }
            d++;
        }

        return d;
    }
};