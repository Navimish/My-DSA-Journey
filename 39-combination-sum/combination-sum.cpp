class Solution {
public:

     vector<vector<int>> res;

     void solve(int idx ,int target,vector<int> candidates, vector<int>& temp ){

        if(idx >= candidates.size()){
            // res.push_back(temp);
            return;
        }

        if(target == 0){
            res.push_back(temp);
            return;
        }

        if(candidates[idx] <= target){
            temp.push_back(candidates[idx]);
            solve(idx,target-candidates[idx],candidates,temp);
            temp.pop_back();
        }

        solve(idx+1,target,candidates,temp);


     }


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<int> temp;
        solve(0,target,candidates,temp);

        return res;
        
    }
};