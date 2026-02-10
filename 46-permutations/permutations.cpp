class Solution {
public:

    vector<vector<int>> res;

    void solve(int idx, vector<int> nums){
        int n = nums.size();

        if(idx==n){
            res.push_back(nums);
            return;
        }



        for(int i = idx; i<n; i++ ){
            swap(nums[idx],nums[i]);
          
            solve(idx+1,nums);
            swap(nums[idx],nums[i]);
        }
         

    }
    vector<vector<int>> permute(vector<int>& nums) {

        // vector<int> temp;

        solve(0,nums);
        return res;
        
    }
};