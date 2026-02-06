class Solution {
public:
    int strStr(string haystack, string needle) {

        int n = needle.length();
        int m = haystack.length();

        for(int i = 0; i<m-n+1; i++){

            if(needle == haystack.substr(i,n)){
                return i;
            }
        }

        return -1;
        
    }
};