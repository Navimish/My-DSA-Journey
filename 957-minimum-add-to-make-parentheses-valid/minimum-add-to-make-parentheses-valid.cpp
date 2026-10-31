class Solution {
public:
    int minAddToMakeValid(string s) {

        int o = 0;
        int add= 0;

        for(auto& x: s){

            if( x == '('){
                o++;
            }else{
                if(o > 0){
                    o--;
                }else{
                    add++;
                }
                
            }
        }

        return add + o;

        
        
        
        
    }
};