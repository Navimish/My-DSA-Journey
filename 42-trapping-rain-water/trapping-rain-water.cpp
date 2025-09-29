class Solution {
public:
    int trap(vector<int>& height) {

        int n = height.size();

        int maxl =0;
        int maxr = 0;
        int i = 0;
        int j =n-1;

        int sum = 0;

        while(i<j){
            maxl = max(maxl,height[i]);
            maxr = max(maxr,height[j]);

            if(maxl<maxr){
                sum += maxl-height[i];
                i++;

            }else{
                sum += maxr-height[j];
                j--;
            }
        }

        return sum;
        
    }
};