class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        

        int n = s1.length();
        int m = s2.length();

        vector<int> freq1(26,0), freq2(26,0);

        for(auto& x: s1){
            freq1[x-'a']++;
        }

        int l = 0;
        for(int r =0; r<s2.length(); r++){

            freq2[s2[r]-'a']++;

            if(r-l+1>n){
                freq2[s2[l]-'a']--;
                l++;
            }

            if(freq1 == freq2)return true;
        }

        return false;
    }
};