class Solution {
public:

vector<vector<int>> res;

void solve(vector<int> temp, vector<int> nums,int i){

    int n = nums.size();

    if(i>=n){
        res.push_back(temp);
        return;
    }

    temp.push_back(nums[i]);
    solve(temp,nums,i+1);
    temp.pop_back();
    solve(temp,nums, i+1);

    
}


    vector<vector<int>> subsets(vector<int>& nums) {

        vector<int> temp;
        int i = 0;


        solve(temp,nums,i);

        return res;
        
    }
};