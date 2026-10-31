class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {


        sort(strs.begin(), strs.end());

        string s = strs[0];
        string e = strs[strs.size()-1];

        string pre = "";

        for(int i = 0; i<strs[0].length(); i++){

            if(s[i] != e[i]) break;

            pre+= s[i];
        }

        return pre;
        
    }
};