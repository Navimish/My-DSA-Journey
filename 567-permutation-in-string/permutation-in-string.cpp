class Solution {
public:
    bool checkInclusion(string s1, string s2) {


        int n = s2.size();
        int m = s1.size();

        vector<int>freq_s1(26,0);
        vector<int>freq_s2(26,0);

        int i =0;
        int j =0;

        for(auto c: s1){
            freq_s1[c-'a']++;
        }

        while(j<n){

             freq_s2[s2[j]-'a']++;

             if(j-i+1 > m){

                freq_s2[s2[i]-'a']--;
                i++;


             }

             if(freq_s2 == freq_s1) return true;

             j++;

        }


        return false;
      

        
    


        
    }
};