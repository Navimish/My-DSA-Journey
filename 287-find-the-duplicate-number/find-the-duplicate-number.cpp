class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        unordered_map<int, int>mp;

        for(auto x : nums){

            if(mp.find(x) != mp.end()){
                return x;
            }

            mp[x]++;


        }


        return -1;


        
    }
};