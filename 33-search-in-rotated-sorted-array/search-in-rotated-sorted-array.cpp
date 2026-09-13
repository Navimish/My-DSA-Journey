class Solution {
public:

int findmin(vector<int>& nums, int n){

    int minidx = 0;
    int min = INT_MAX;


    for(int i = 0; i<n; i++ ){

        if(nums[i] < min){
            min = nums[i];
            minidx =i;
        }
    }

    return minidx;
}

int binarySearch(int l, int r, vector<int>& nums,int target){

    

    while(l<=r){

        int mid = l+(r-l)/2;

        if(nums[mid] > target){
            r = mid-1;
        }else if( nums[mid] < target){
            l = mid+1;
        }else{
            return  mid;
        }
    }

    return -1;
}

    int search(vector<int>& nums, int target) {

        int n = nums.size();

        int idx = findmin(nums, n);

        int res = binarySearch(0, idx-1,nums,target);

        if(res != -1) return res;

        res = binarySearch(idx, n-1,nums,target);

        return res;

        
    }
};