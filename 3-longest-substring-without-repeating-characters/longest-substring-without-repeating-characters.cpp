class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n = s.length();
        int i = 0;
        int maxl = 0;

        unordered_set<int> set;

        for(int j =0; j<n; j++){

            while(set.find(s[j]) != set.end()){
                set.erase(s[i]); i++;
            }

            set.insert(s[j]);

            maxl = max(maxl , j-i+1);
        }

        return maxl;
        
    }
};