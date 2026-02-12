class Solution {
public:

    vector<vector<int>> res;

    void solve(int idx,vector<int> nums){

        if(idx == nums.size()){
            res.push_back(nums);
            return;
        }

        unordered_set<int> st;


        for(int i =idx; i<nums.size(); i++){
            // if(i>idx && nums[i] == nums[i-1]) continue;
            if(st.count(nums[i])) continue;
            st.insert(nums[i]);

            swap(nums[i],nums[idx]);
            solve(idx+1,nums);
            swap(nums[i],nums[idx]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {

        // sort(nums.begin(),nums.end());

        // vector<int> temp;
        solve(0,nums);

        return res;

        
    }
};