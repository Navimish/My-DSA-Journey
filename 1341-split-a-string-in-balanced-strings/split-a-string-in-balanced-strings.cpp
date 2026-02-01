class Solution {
public:
    int balancedStringSplit(string s) {

        int r = 0;
        int l =0;
        int sub =0;

        for(auto& x:s){

            if(x == 'R') r++;
            if(x == 'L') l++;

            if(r == l){
                sub++; 
                r= l= 0;
            }
        }

        return sub;
        
    }
};