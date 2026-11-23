class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        sort(strs.begin(),strs.end());

        string f = strs[0];
        string l = strs[strs.size()-1];

        int i = 0;
        string res ="";

        while(i< f.length()){

            if(f[i] != l[i]) break;
            
            res.push_back(f[i]);
            i++;
        }

        return res;
        
    }
};