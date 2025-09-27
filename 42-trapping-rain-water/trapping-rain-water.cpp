class Solution {
public:
    int trap(vector<int>& height) {

        int n = height.size();
        int lmax =0;
        int rmax =0;

        int i =0;
        int j = n-1;

        int sum = 0;

        while(i<j){

            lmax = max(lmax,height[i]);
            rmax = max(rmax,height[j]);

            if(lmax<rmax){
                sum +=lmax- height[i];
                i++;
            }else{
                sum += rmax-height[j];
                j--;
            }
        }


        return sum;
        
    }
};