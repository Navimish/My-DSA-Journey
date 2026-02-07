class Solution {
public:
    int trap(vector<int>& height) {

        int n = height.size();

        int l =0;
        int r = n-1;
        int lm=0,rm =0;
        int w =0;

        while(l<r){

            if(height[l]<height[r]){

                if(lm <= height[l]){
                    lm =height[l];
                }else{
                    w += lm-height[l];

                }

                l++;
            }else{
               

                if(rm <= height[r]){
                    rm =height[r];
                }else{
                    w += rm-height[r];

                }

                r--;

            }
        }

        return w;
        
    }
};