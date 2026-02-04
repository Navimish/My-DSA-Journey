class Solution {
public:
    int characterReplacement(string s, int k) {
        

        int l =0;
        int maxfreq = 0;
        int res = 0;

        vector<int> freq(26,0);


        for(int r =0; r<s.length();r++ ){

            freq[s[r]-'A']++;

            maxfreq = max(maxfreq,freq[s[r]-'A']);

            if((r-l+1) - maxfreq >k){
                freq[s[l]-'A']--;
                l++;
            }


            res = max(res,r-l+1);


        }

        return res;
    }
};