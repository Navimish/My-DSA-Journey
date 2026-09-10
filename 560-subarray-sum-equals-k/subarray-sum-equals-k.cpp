class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int res = 0;
        int currentSum = 0;

        unordered_map<int, int> mp;

        mp[0] =1;

        for(int i = 0; i< nums.size(); i++){

            currentSum += nums[i];

            if(mp.find(currentSum-k) != mp.end()){
                res +=  mp[currentSum-k];
            }

            mp[currentSum]++;
        }

        return res;
        
    }
};