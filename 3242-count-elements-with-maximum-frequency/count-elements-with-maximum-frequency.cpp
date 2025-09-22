class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {

        unordered_map<int,int> mp;

        // vector<int> freq(nums.size());

        int maxfreq =0;

    

        for(int i = 0; i<nums.size(); i++){
            mp[nums[i]]++;

            maxfreq= max(maxfreq,mp[nums[i]]);
        }

        int count =0;

        for(auto &c:mp){
            if(c.second== maxfreq) count += c.second;
        }

        return count;




        
    }
};