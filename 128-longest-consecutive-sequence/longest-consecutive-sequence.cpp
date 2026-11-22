class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> set(nums.begin(), nums.end());

        int maxl = 0;

        for(auto& x: set){
        int len = 0;

            if(set.find(x-1) == set.end()){
                    len++;

                while(set.find(x+len) != set.end() ) len++;

                maxl = max(maxl, len);
            }
        }

        return maxl;
        
    }
};