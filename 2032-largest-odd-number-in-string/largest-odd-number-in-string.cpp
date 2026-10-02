class Solution {
public:
    string largestOddNumber(string num) {

      int n = num.length();

      for(int i = n-1; i>=0; i--){
        int x = num[i]-'0';

        if(x%2 != 0){

            string sub = num.substr(0,i+1);
            return sub;
        }
      }
      return "";

        
    }
};