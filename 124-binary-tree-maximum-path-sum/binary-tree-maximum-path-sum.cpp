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

    int solve(TreeNode* root, int& maxsum){
        if(!root) return 0;

        int l = solve(root->left,maxsum);
        int r = solve(root->right,maxsum);

        int dono_side_se_best = l+r+root->val;
        int koi_ek_acha = max(l,r) + root->val;
        int sirf_root_acha = root->val;

        maxsum = max({maxsum,dono_side_se_best,koi_ek_acha,sirf_root_acha});

        return max(koi_ek_acha,sirf_root_acha); 

    }

    int maxPathSum(TreeNode* root) {

        int maxsum = INT_MIN;

        solve(root,maxsum);

        return maxsum;
        
    }
};