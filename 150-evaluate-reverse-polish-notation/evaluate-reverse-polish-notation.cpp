class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int> st;

        for(auto t : tokens){
            if(t != "+" && t != "-" && t != "*" && t!= "/" ){
                st.push(stoi(t));
            }else{

                int n1 = st.top();
                st.pop();

                int n2 = st.top();
                st.pop();

                // n1 = stoi(n1);
                // n2 = stoi(n2);

                int res = 0;

                if(t == "+") res = n1+n2;
                if(t == "-") res = n2-n1;
                if(t == "*") res = n1*n2;
                if(t == "/") res = n2/n1;
                st.push(res);
            }
        }

        return st.top();
        
    }
};