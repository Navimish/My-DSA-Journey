class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();
        int sum = n *(n+1)/2;

        int actual_sum =0;

        for(auto x: nums){
            actual_sum += x;
        }

        int num = sum-actual_sum;
        return num;
        
    }
};