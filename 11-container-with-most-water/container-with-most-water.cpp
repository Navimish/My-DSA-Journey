class Solution {
public:
    int maxArea(vector<int>& height) {

        int n = height.size();

        int i = 0;
        int j =n-1;

        int max_ar= 0;

        while(i<j){

            int h = min(height[i],height[j]);

            int area= h *(j-i);

            max_ar = max(max_ar,area);

            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }

            
        }

        return max_ar;
        
    }
};