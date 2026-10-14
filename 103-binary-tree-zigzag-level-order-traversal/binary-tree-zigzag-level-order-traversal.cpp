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

        vector<vector<int> > res;

        if(!root) return res;

        queue<TreeNode*> q;

        q.push(root);

        bool l_to_r = true;

        while(!q.empty()){
            int n = q.size();

            vector<int> v(n);

            if(l_to_r){
                for(int i = 0; i<n; i++){
                    TreeNode* temp = q.front();
                    q.pop();
                    v[i] = temp->val;

                    if(temp->left) q.push(temp->left);
                    if(temp->right) q.push(temp->right);

                   
                }
            }else{

                for(int i = n-1; i>= 0; i--){
                     TreeNode* temp = q.front();
                    q.pop();
                    v[i] = temp->val;

                    if(temp->left) q.push(temp->left);
                    if(temp->right) q.push(temp->right);
                    
                }
            }

            res.push_back(v);
            l_to_r = !l_to_r;
        }

        return res;
        
    }
};