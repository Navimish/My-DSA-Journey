class Solution {
public:

    vector<vector<int>> res;

    void solve(int start,vector<int> candidates,int target,vector<int> &temp ){

        if(target == 0){
            res.push_back(temp);
            return;
        }

        // if(target < 0) return;


        for(int i = start; i< candidates.size(); i++){

            if(candidates[i]>target) break;


            temp.push_back(candidates[i]);
            solve(i,candidates,target-candidates[i],temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());

        vector<int> temp;
        solve(0,candidates,target,temp);

        return res;
        
    }
};