class Solution {
public:
    bool isAnagram(string s, string t) {

        vector<int> freq(26,0);

        if(s.length() != t.length()) return false;

        for(auto& x: s){
            freq[x-'a']++;
        }

        for(auto& x : t){
            freq[x-'a']--;
        }

        for(auto& x: freq){
            if(x != 0) return false;
        }

        return true;
        
    }
};