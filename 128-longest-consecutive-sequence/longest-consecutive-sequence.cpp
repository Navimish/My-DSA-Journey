class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int maxCount =0;
       

        unordered_set<int> s(nums.begin(), nums.end());

        for(auto &x: s){
          

            if(s.find(x-1) == s.end()){
                int count = 1;

                while(s.find(x+count) != s.end()) count++;
            maxCount = max(maxCount, count);
            }

        }

        return maxCount;
        
    }
};