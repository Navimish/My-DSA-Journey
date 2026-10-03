class Solution {
public:
    string decodeString(string s) {

        int n = s.size();

        stack<string> st;

        int i = 0;

        string count = "";
        string repeat = "";

        while(i<n){

            if(s[i] >= '0' && s[i] <= '9'){
             count+=s[i];
            }else if(s[i] >= 'a' && s[i] <= 'z'){
                 repeat+=s[i];
            }else if(s[i] == '['){

                st.push(repeat);
                st.push(count);

                repeat="";
                count="";
            }else if(s[i] == ']'){

                int num = stoi(st.top());
                st.pop();

                string temp1 = "";

                for(int j =0; j<num; j++){
                    temp1+= repeat;
                }

                string temp2 = st.top(); st.pop();

                repeat =  temp2 + temp1;
            }

            i++;
        }

        return repeat;
                
            


        
    }
};