class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {

        vector<int> res;

        int n = words.size();

        for(int i = 0; i<n; i++){

            int l = words[i].length();

           for(int j = 0; j<l; j++){

            if(words[i][j] == x){
                res.push_back(i);
                break;
            }
           }


        }

        return res;
        
    }
};