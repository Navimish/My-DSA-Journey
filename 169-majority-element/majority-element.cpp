class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map<int, int> mp;

        for(auto x: nums){
            mp[x]++;
        }

        int n = nums.size();
        int maj = n/2;

        for(auto x : mp){

            if(x.second > maj) return x.first;
        }

        return 0;
        
    }
};