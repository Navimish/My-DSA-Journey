class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int>st;

        for(auto& x: tokens){

            if(x != "+" && x != "-" && x != "*" && x != "/" ){
                st.push(stoi(x));
            }else{

                int n1 = st.top();
                st.pop();
                int n2 = st.top();
                st.pop();

                int num =0;

                if(x=="+") num = n1+n2;
                if(x=="-") num = n2-n1;
                if(x=="*") num = n1*n2;
                if(x=="/") num = n2/n1;

                st.push(num);


            }

        }

        return st.top();


        
    }
};