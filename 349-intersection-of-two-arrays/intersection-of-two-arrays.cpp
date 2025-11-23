class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      unordered_set<int>s(nums1.begin(),nums1.end()); 
        unordered_set<int>y(nums2.begin(),nums2.end()); 
 
        vector<int>res;

        for(int x:s){
            if(y.count(x)){
            res.push_back(x);
            }
        }
        return res;
    }
};