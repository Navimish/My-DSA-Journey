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

        int solve(TreeNode* root, int& res){
            if(!root) return 0;

            int lh = solve(root->left,res);
            int rh = solve(root->right,res);

            res = max(res,lh+rh);

            return max(lh,rh)+1;
        }


    int diameterOfBinaryTree(TreeNode* root) {

        int res = INT_MIN;
       solve(root,res);
       return res;
        
    }
};









