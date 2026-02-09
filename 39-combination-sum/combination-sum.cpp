class Solution {
public:

     vector<vector<int>> res;

     void solve(int idx ,int target,vector<int> candidates, vector<int>& temp ){

     if(target == 0){
        res.push_back(temp);
        return;
     }

     for(int i = idx; i<candidates.size(); i++){

        if(candidates[i] > target) continue;

        temp.push_back(candidates[i]);
        solve(i,target-candidates[i],candidates,temp);
        temp.pop_back();


     }

     }


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<int> temp;
        solve(0,target,candidates,temp);

        return res;
        
    }
};