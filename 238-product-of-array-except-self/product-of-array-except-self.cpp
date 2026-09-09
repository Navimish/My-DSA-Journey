class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> v(nums.size(),1);

        int pre = 1;

        for(int i = 0; i<nums.size(); i++){

            v[i] = pre;
            pre *= nums[i];
        }

        int suff =1;

        for(int i = nums.size()-1; i>= 0; i--){

            v[i] *= suff;
            suff *= nums[i];
        }

        return v;
        
    }
};