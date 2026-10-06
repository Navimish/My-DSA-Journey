class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int i =0;
        int len = 0;
        unordered_set<int> st;

        int n = s.length();

        for(int j =0; j<n; j++){

            while(st.find(s[j]) != st.end()){
                st.erase(s[i]);
                i++;
            }

            st.insert(s[j]);

             len = max(len,j-i+1);



        }

        return len;
        
    }
};