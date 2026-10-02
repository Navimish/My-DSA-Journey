class Solution {
public:
    int maxFreqSum(string s) {

        unordered_map<char, int> mp;
        string vowel = "aeiou";

        int maxv = 0;
        int maxc =0;

        for(auto& x: s){
            mp[x]++;

            if(vowel.find(x) != string::npos){
                maxv = max(maxv,mp[x]);
            }else{
                maxc = max(maxc,mp[x]);
            }
        }

        return maxc +maxv;
        
    }
};