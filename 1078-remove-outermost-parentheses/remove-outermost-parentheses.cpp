class Solution {
public:
    string removeOuterParentheses(string s) {

        stack<char> st;
        string res="";

        for(auto& x: s){

            if(x == '('){

                if(!st.empty()) res+=x;
                st.push(x);
            }else{

                st.pop();
                if(!st.empty()) res+= x;
            }
        }

        return res;



        


        
    }
};