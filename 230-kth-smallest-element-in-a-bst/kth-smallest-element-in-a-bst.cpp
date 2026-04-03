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
    int inorder(TreeNode* root, int k, int& i){

        if(!root) return -1;

        int l = inorder(root->left,k,i);
        if(l != -1) return l;

        i++;

        if(i == k) return root->val;
        
        return inorder(root->right,k,i);

    }
    int kthSmallest(TreeNode* root, int k) {
        int i =0;
       int val= inorder(root,k,i);
       return val;

        
    }
};