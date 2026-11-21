class Solution {
public:
    int minAddToMakeValid(string s) {

        int c1 = 0;
        int c2 = 0;

        for(auto& x: s){

            if(x == '(') c1++;
            if(x == ')' && c1 >0){
                c1--;
            }else if(x == ')'){
                c2++;
            }

        }

        return  c1+c2;
        
    }
};