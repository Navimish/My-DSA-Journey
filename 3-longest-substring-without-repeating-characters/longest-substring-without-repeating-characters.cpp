class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set<int> st;

        int l =0;
        int len = 0;

        for(int r = 0; r<s.length(); r++){

            while(st.find(s[r]) != st.end()){
                st.erase(s[l]);
                l++;
            }

            st.insert(s[r]);
            len = max(len,r-l+1);
        }

        return len;


        
    }
};