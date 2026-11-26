class Solution {
public:
    bool isValid(string s) {


        stack<int> st;

        for(auto& x: s){

            if(x == '(' || x == '{' || x=='['){

                st.push(x);
            }else{

                if(st.empty()) return false;

                int y = st.top(); 

                if(y == '(' && x == ')'|| 
                y == '{' && x == '}'||
                y == '[' && x == ']'){
                st.pop();  
                    
                } else {
                    return false;
                }
            }
        }

        return st.empty();
        
    }
};