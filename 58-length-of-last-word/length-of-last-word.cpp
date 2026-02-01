class Solution {
public:
    int lengthOfLastWord(string s) {

        int length = 0;

        int idx=s.find_last_not_of(' ');
        if(idx == string::npos) return 0;
        s.erase(idx+1);

        int n = s.length();
        int i = n-1;

        while(i>=0 && s[i] != ' '){
            i--;
            length++;
        }

        return length;
        
    }
};