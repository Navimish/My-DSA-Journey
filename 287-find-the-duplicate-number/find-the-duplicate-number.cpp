class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        vector<int> copy(nums.begin(), nums.end());

        sort(copy.begin(),copy.end());

        int n= copy.size();

        for(int i =0; i<n; i++){
            if(copy[i] == copy[i+1]) return copy[i];
        }


        return NULL;
        
    }
};