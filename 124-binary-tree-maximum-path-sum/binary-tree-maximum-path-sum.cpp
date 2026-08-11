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

    int solve(TreeNode* root, int& sum){

        if(!root) return 0;

        int lh = solve(root->left, sum);
        int rh = solve(root->right, sum);

        int both_good = lh+rh+root->val;
        int only_one = max(lh,rh) + root->val;
        int only_root = root->val;

        sum =max({sum,both_good,only_one,only_root});

        return max(only_one,only_root);
    }
    int maxPathSum(TreeNode* root) {

        int sum = INT_MIN;
        solve(root,sum);

        return sum;
        
    }
};