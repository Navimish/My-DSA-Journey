class Solution {
public:
    bool isIsomorphic(string s, string t) {

        int n = s.length();

        unordered_map<char, char> mp1;
        unordered_map<char, char> mp2;

        int i = 0;

        while(i<n){

            if(mp1.count(s[i]) && mp1[s[i]] != t[i] || 
                mp2.count(t[i]) && mp2[t[i]] != s[i]
            ) return false;

            mp1[s[i]] = t[i];
            mp2[t[i]] = s[i];

            i++;
        }

        return true;
        
    }
};