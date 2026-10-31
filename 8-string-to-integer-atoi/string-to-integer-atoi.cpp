class Solution {
public:
    int myAtoi(string s) {

        int i = 0;
        int n = s.length();
        int sign = 1;
        long long sum = 0;

        while(i<n && s[i] == ' ')i++;

        if(i<n && s[i] == '-'){
            sign = -1;
            i++;
        }else if(i<n && s[i] == '+'){
            i++;
        }


        while(i<n && isdigit(s[i])){

            sum = sum*10 + s[i]-'0';


            if(sum * sign>= INT_MAX) return INT_MAX;
            if(sum * sign<= INT_MIN) return INT_MIN;

            i++;


        }

      


        return sum * sign;
    }
};