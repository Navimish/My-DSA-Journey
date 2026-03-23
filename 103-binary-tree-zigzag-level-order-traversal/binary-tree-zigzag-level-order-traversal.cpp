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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        queue<TreeNode*>q;

        if(!root) return res;
        q.push(root);

        bool lefttoright = true;

        while(!q.empty()){

            int n = q.size();
            vector<int> lvl(n);

            for(int i =0; i<n; i++){
                TreeNode* num = q.front();
                q.pop();

                int index = lefttoright?i : (n-i-1);
                lvl[index] = num->val;

                if(num->left)q.push(num->left);
                if(num->right)q.push(num->right);
            }

            lefttoright=!lefttoright;

            res.push_back(lvl);

        }

        return res;
        
    }
};