class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());


        vector<vector<int>> res;

        for(int fixed =0; fixed< nums.size(); fixed++){

            if(fixed>0 && nums[fixed] == nums[fixed-1]) continue;

            int i = fixed+1;
            int j = nums.size()-1;


            while(i<j){

                int sum = nums[fixed]+ nums[i]+nums[j];

                if(sum == 0){
                    res.push_back({nums[fixed],nums[i], nums[j]});

                    while( i<j && nums[i]== nums[i+1]) i++;
                    while( i<j && nums[j]== nums[j-1]) j--;

                    i++;
                    j--;
                }


                else if(sum<0){
                    i++;
                }else{
                    j--;
                }
            }

        }

       

        return res;
        
    }
};