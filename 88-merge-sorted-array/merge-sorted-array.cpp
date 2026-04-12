class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) {

        int k = m+n;

        while(m>0 && n > 0){

            if(num2[n-1]>num1[m-1]){
                num1[k-1] = num2[n-1];
                n--;
                k--;
            }else{
                num1[k-1] = num1[m-1];
                m--;
                k--;

            }


        }

        while(n>0){
            num1[k-1] = num2[n-1];
                n--;
                k--;
        }


        
    }
};











































