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
        queue<TreeNode*> q;

        if(!root) return  res;

        q.push(root);

        bool lefttoright= true;

        while(!q.empty()){

            int n = q.size();

            vector<int> v(n);

            for(int i =0; i<n; i++){
                TreeNode* temp = q.front();
                q.pop();

                int idx = lefttoright?i:(n-i-1);

                v[idx] = temp->val;

                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);


            }

            lefttoright = !lefttoright;

            res.push_back(v);
        }
        

        return res;
    }
};