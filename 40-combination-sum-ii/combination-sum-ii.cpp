class Solution {
public:

    vector<vector<int>> res;

    void solve(int start,vector<int>candidates, int target, vector<int> &temp){

        if(target==0){
            res.push_back(temp);
            return;
        }

        for(int i =start; i<candidates.size(); i++){

            if(candidates[i]>target) break;
             if(i > start && candidates[i] == candidates[i-1]) continue;

            temp.push_back(candidates[i]);
            solve(i+1,candidates,target-candidates[i],temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());

        vector<int> temp;
        solve(0,candidates,target,temp);

        return res;
        
    }
};