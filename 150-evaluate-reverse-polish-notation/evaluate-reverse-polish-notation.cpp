class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int>st;

        for(auto t : tokens){

            if(t == "+" || t== "-" || t=="*" || t=="/"){

                int n1 = st.top();
                st.pop();
                int n2 = st.top();
                st.pop();
                int res = 0;

                if(t == "+") res = n2+n1;
                if(t == "-") res = n2-n1;
                if(t == "/") res = n2/n1;
                if(t == "*") res = n2*n1;
                st.push(res);
            }else{
                st.push(stoi(t));
            }
        }

        return st.top();






        
    }
};