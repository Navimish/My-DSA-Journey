class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set<int> set;
        int maxl = 0;

        int i = 0;
        for(int j =0; j<s.length(); j++){

            while(set.find(s[j]) != set.end() ){
                set.erase(s[i]);
                i++;
            }

            set.insert(s[j]);

            maxl = max(maxl,j-i+1);

        }

        return maxl;
        
    }
};