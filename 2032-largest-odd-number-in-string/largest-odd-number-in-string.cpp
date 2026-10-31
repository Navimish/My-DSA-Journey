class Solution {
public:
    string largestOddNumber(string nums) {
        

        // int n  = stoi(num);

        for(int i = nums.length()-1; i>=0; i--){

            int n  = nums[i]- '0';

            if(n%2 != 0) return nums.substr(0,i+1);
        }

        return "";


    }
};