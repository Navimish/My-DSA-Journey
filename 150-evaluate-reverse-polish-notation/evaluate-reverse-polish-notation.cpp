class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int> st;

        

        for(auto& x:  tokens){



            if(x == "+" || x=="-" || x == "*" || x== "/"){

                int num1 = st.top(); st.pop();
                int num2 = st.top(); st.pop();

                if(x == "+") st.push(num2+num1);
                if(x == "-") st.push(num2-num1);
                if(x == "*") st.push(num2*num1);
                if(x == "/") st.push(num2/num1);
            }else{
                st.push(stoi(x));
            }
        }

        return st.top();
        
    }
};