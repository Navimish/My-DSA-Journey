class Solution {
public:


    int getmaxfreq(vector<int> freq){

        int count = 0;

        for(auto &c :freq){

            count = max(count,c);
        }

        return count;
    }
    int characterReplacement(string s, int k) {

        int r =0;
        int l =0;

        int res =0;

        vector<int> freq(26,0);

        for(; r<s.length(); r++){

            freq[s[r]-'A']++;

            int maxfreq = getmaxfreq(freq);

            if((r-l+1)-maxfreq > k){
                freq[s[l]-'A']--;
                l++;
            }


            res = max(res,r-l+1);

        }


        return res;
        
    }
};