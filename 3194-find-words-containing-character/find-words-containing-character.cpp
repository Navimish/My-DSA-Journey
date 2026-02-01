class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {

        vector<int> res;

        for(int i =0; i<=words.size()-1; i++){

            if(words[i].find(x) != string::npos){
                res.push_back(i);
            }
        }

        return res;
        
    }
};