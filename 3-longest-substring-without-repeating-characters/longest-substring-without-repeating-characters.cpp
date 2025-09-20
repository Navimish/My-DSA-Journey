class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int left = 0;
        unordered_set<char> seen;

        int maxlength = 0;

        for(int right = 0; right<s.length(); right++ ){

            while(seen.find(s[right]) != seen.end()){

                seen.erase(s[left]);
                // while(s[left] != s[right]) left++;
                left++;
            }

            seen.insert(s[right]);
            maxlength = max(maxlength,right-left+1);

        }

        return maxlength;
        
    }
};