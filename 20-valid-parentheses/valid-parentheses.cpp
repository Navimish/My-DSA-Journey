class Solution {
public:
    bool isValid(string s) {

        if(s.length() == 0) return false;
        if(s.length() == 1) return false;

        stack<char> st;

        string open = "({[";

        for(auto& x: s){

            if(open.find(x) != string::npos){
                st.push(x);
            }else{

                if(st.empty()) return false;

                int y = st.top();

                if(x == ')' && y== '(' || x == '}' && y== '{' || x == ']' && y== '[' ){
                    st.pop();
                }else{
                    return false;
                }
            }
        }

        return st.empty();
        
    }
};