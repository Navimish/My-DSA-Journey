class Solution {
public:
    bool isSubsequence(string s, string t) {

        int n = s.size();
        int m = t.size();

        int i  =0,j=0;
        string str = "";

        while( i<n && j<m){


            if(s[i] == t[j]){
                str += t[j];
                i++;
                
            }

            j++;
        }

        if(s == str){
            return true;
        }

        return false;
        
    }
};