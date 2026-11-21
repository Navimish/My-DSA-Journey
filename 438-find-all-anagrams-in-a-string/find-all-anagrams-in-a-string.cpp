class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> v;

        int n1 = s.length();
        int k = p.length();

        vector<int> freqS(26,0);
        vector<int> freqP(26,0);

        for(auto& x : p){
            freqP[x-'a']++;
        }

        for(int i = 0; i< n1; i++){

            freqS[s[i] - 'a']++;

            if(i >= k) freqS[s[i-k] - 'a']--;

            if(i >= k-1 && freqP == freqS){
                v.push_back(i-k+1);
            }
        }

        return v;

        
    }
};