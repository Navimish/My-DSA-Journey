class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int sum = 0;

        int n = nums.size();
        int sec_sum = n*(n+1)/2;

        for(auto x:nums){
            sum += x;
        }

        int remain = sec_sum - sum;

        return remain;
        
    }
};