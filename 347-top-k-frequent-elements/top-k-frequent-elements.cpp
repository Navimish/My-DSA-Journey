class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> mp;
        vector<int> res;

        for(auto x: nums){
            mp[x]++; 
        }

         vector<pair<int,int>> vec(mp.begin(), mp.end());
        sort(vec.begin(),vec.end(),[](pair<int,int> &a,pair<int,int> &b){
            return a.second > b.second;
        });


        for(auto &x : vec){
            if(k==0) break;
            res.push_back(x.first);
            k--;
        }

        return res;
        
    }
};