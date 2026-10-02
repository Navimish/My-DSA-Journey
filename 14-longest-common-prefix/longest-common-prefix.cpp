class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        sort(strs.begin(), strs.end());

        int n = strs.size();
        string f = strs[0];
        string l = strs[n-1];

        string res = "";

        int i =0;

        while(i < f.length() && i < l.length() && f[i] == l[i]){

            res += f[i];
            i++;
        }

        return res;
        
    }
};