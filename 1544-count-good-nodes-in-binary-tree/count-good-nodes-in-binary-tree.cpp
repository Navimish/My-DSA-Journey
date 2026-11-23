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


    void solve(TreeNode* root,int maxv, int& gn){


        if(!root) return ;

        if(maxv <= root->val){
            gn++;
            maxv = root->val;
        }

        solve(root->left,maxv,gn);
        solve(root->right,maxv,gn);


    }
    int goodNodes(TreeNode* root) {

        if(!root) return 0;

        int maxv = root->val;
        int gn = 0;

        solve(root,maxv,gn);

        

        return gn;


        
    }
};