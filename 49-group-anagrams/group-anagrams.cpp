class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>>mp;

        for(auto& x: strs){

            string y = x;
            sort(x.begin(),x.end());

            mp[x].push_back(y);
            
        }

        vector<vector<string>> res;

        for(auto& x: mp){
            res.push_back(x.second);
        }

        return res;
        
    }
};