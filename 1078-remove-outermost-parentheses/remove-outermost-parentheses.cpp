class Solution {
public:
    string removeOuterParentheses(string s) {

        int count = 0;
        string res = "";


        for(auto& x: s){

            if(x == ')') count--;

            if(count != 0) res+= x;


            if(x=='(') count++;
        }

        return res;
        
    }
};