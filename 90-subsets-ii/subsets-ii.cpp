class Solution {
public:

    vector<vector<int>> res;

    void solve(int start, vector<int> nums, vector<int>& temp){
        int n = nums.size();

        res.push_back(temp);


        for(int i = start; i<n; i++){

            if(i>start && nums[i] == nums[i-1]) continue;
            temp.push_back(nums[i]);
            solve(i+1,nums,temp);
            temp.pop_back();


        }

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        vector<int> temp;
        solve(0,nums,temp);

        return res;
        
    }
};