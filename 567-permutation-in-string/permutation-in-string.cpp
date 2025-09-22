class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int n = s1.size();
        int m = s2.size();

        int l = 0;

        sort(s1.begin(),s1.end());

        for(int r =0; r<m-n+1; r++ ){

            string sub = s2.substr(r,n);

            sort(sub.begin(), sub.end());

            if(sub == s1) return true;
        }


        return false;
        
    }
};