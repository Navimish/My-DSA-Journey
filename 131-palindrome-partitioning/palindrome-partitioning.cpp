class Solution {
public:

bool isPalindrome(string s, int r, int l){

    while(l<r){
        if(s[l] != s[r]) return false;

        l++;
        r--;
    }

    return true;
}


    void solve(int idx, string& s,vector<vector<string>>& res,vector<string>& curr){

        if(idx == s.length()){
            res.push_back(curr);
            return;
        }


        for(int i = idx; i<s.length(); i++){
            if(isPalindrome(s,i,idx)){
                curr.push_back(s.substr(idx,i-idx+1));
                solve(i+1,s,res,curr);
                curr.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {

        vector<vector<string>> res;
        vector<string> curr;

        solve(0,s, res, curr);


        return res;


        
    }
};