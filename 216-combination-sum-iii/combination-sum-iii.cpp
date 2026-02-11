class Solution {
public:
    vector<vector<int>>res;
    void solve(int start,int k,int target, vector<int>& temp){
        if(k == 0 && target == 0){
            res.push_back(temp);
            return;
        }

        if(k == 0 || target < 0) return;

        for(int i =start; i<=9; i++){

            temp.push_back(i);
            solve(i+1,k-1,target-i,temp);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        solve(1,k,n,temp);
        return res;
        
    }
};