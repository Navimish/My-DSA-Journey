class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int n = nums.size();

        int l = 0;
        int r = n-1;

        while(l<r){

            bool isEven;

            int mid = l + (r-l)/2;

            if((r-mid)%2 == 0){
                isEven = true;
            }else{
                isEven = false;
            }


            if(nums[mid] == nums[mid+1]){

                if(isEven){

                    l = mid+2;

                }else{

                    r = mid-1;

                }
            }else{  //nums[mid] != nums[mid+1]

                if(isEven){
                    r = mid;
                }else{
                    l = mid+1;
                }
            }
        }


        return nums[l];
        
    }
};