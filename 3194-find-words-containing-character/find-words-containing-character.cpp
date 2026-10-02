class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {

       vector<int> res;

       int n = words.size();

       if(n== 0) return res;

       for( int j =0; j<n; j++){
            int l = words[j].length();
            for(int i = 0; i< l; i++){
                if(words[j][i] == x) {
                    res.push_back(j);
                    break;
                }
            }
       } 

       return res;
        
    }
};