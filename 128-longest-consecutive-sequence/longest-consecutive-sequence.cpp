class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

       

        unordered_set<int> set(nums.begin(),nums.end());

        int longest =0;

        for(auto x: set){

            if(set.find(x-1) == set.end()) {

                    int len = 1;


                while(set.find(x+len) != set.end()) len++;


                longest=  max(longest,len);

            }
            
        }

        return longest;
        
    }
};