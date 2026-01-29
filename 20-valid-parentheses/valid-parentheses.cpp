class Solution {
public:
    bool isValid(string s) {


        if(s.length() == 1) return false;
        if(s.length() == 0) return true;

        stack<char>st;

        

        for (auto x : s){

            if(x == '(' || x == '[' || x == '{'){
                st.push(x);
            }else{


            if(st.empty()) return false;
            int y = st.top();

            if(x== ')' && y == '(' ||x== '}' && y == '{' ||x== ']' && y == '[' ){ st.pop();}else{ return false;}
            }

        }


        return st.empty();
        
    }
};