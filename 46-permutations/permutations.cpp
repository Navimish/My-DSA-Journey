class Solution {
public:
    vector<vector<int>> res;

    void solve(int idx, int n, vector<int> nums) {

        if (idx == n) {
            res.push_back(nums);
            return;
        }

        for (int i = idx; i < n; i++) {

            swap(nums[i], nums[idx]);
            solve(idx + 1, n, nums);
            swap(nums[i], nums[idx]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {

        int n = nums.size();
        int idx = 0;

        solve(idx, n, nums);

        return res;
    }
};