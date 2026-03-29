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

    void cgn(TreeNode* root,int& count,int maxval){
        if(!root) return;

        if(root->val>=maxval){
            count++;
            maxval = root->val;
        }

        cgn(root->left,count,maxval);
        cgn(root->right,count,maxval);

    }

    int goodNodes(TreeNode* root) {

        int count = 0;
        if (!root) return count;

        cgn(root,count,root->val);

        return count;
    }
};
