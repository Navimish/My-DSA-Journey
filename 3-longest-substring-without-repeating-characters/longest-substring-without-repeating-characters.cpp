class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set<int> set;
        int l = 0;
        int len = 0;

        for(int r = 0; r<s.length(); r++ ){

            while(set.find(s[r]) != set.end()){
                set.erase(s[l]);
                l++;
            }

            set.insert(s[r]);
            len = max(len, r-l+1);

        }

        return len;
        
    }
};