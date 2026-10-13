class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n = s.length();

        if(n== 0) return 0;

        unordered_set<char> set;;

        int i = 0;

        int len = INT_MIN;

        for(int j = 0; j<n; j++){

            while(set.find(s[j]) != set.end()){
                set.erase(s[i]);
                i++;
            }

            set.insert(s[j]);

            len = max(len,j-i+1);
        }

        return len;
        
    }
};