class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> mp;

        int res = 0;
        int curr = 0;

        mp[0] = 1;

        for(auto& x: nums){

            curr += x;

            if(mp.find(curr -k) != mp.end()){

                res += mp[curr-k];
            }

            mp[curr]++;
        }

        return res;
        
    }
};