class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n = s.length();

        if(n == 0) return 0;

        int i = 0;

        unordered_set<char> st;

        int maxl = 0;

        for(int j = 0; j<n; j++ ){

            while(st.find(s[j]) != st.end()){
                st.erase(s[i]);
                i++;
            }

            maxl = max(maxl, j-i+1);

            st.insert(s[j]);
        }

        return maxl;
        
    }
};