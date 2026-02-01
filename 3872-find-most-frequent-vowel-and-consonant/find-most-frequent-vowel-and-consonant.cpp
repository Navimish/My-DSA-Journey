class Solution {
public:
    int maxFreqSum(string s) {

        unordered_map<char,int> mp;
        int maxv=0;
        int maxc=0;

        for(auto& x: s){
            mp[x]++;

            if(x == 'a' ||x == 'e' || x == 'i' || x == 'o' || x == 'u' ){
                maxv = max(maxv,mp[x]);
            }else{

                 maxc = max(maxc,mp[x]);

            }
        }

        return maxv+maxc;
        


    }
};