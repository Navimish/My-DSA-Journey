class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int count = 0;
        int maxcount = 0;

        for(auto x: nums){
            if(x==1){
                count++;
            }else{
                count = 0;
            }

            maxcount = max(maxcount,count);
        }

        return maxcount;
        
    }
};