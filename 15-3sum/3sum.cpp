class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> res;

        int n = nums.size();

        sort(nums.begin(), nums.end());

        for(int i =0; i<n; i++){

            int l = i+1;
            int r = n-1;

                if(i>0 && nums[i-1]== nums[i]) continue;
            while(l<r){

                int sum = nums[i]+nums[l]+nums[r];

                if(sum== 0){
                    res.push_back({nums[i],nums[l],nums[r]});
                    while(l<r && nums[r] == nums[r-1])r--;
                    while(l<r && nums[l] == nums[l+1])l++;

                    r--;
                    l++;
                }else if(sum>0){
                    r--;
                }else{
                    l++;
                }
            }
        }

        return res;
        
    }
};