class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int res = 0;
        int curr = 0;

        unordered_map<int, int> mp;

        mp[0] = 1;

        for(auto& x: nums){

            curr += x;

            if(mp.find(curr-k) != mp.end()){
                res += mp[curr-k];
            }

            mp[curr]++;
        }

        return res;
        
    }
};