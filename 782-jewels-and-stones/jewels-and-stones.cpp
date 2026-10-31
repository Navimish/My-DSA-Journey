class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {

        int j = 0;

        for(auto& x: stones){

            if(jewels.find(x) != string::npos){
                j++;
            }
        }

        return j;
        
    }
};