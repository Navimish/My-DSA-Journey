class Solution {
public:

    vector<vector<int>> res;

    void solve(int i, int n, int k, vector<int> temp){

        if(n-i+1 <k) return;

        if(k==0){
            res.push_back(temp);
            return;
        }

        
        temp.push_back(i);
        solve(i+1,n,k-1,temp);
        temp.pop_back();
        solve(i+1,n,k,temp);

    }


    vector<vector<int>> combine(int n, int k) {


        vector<int> temp;
        int i =1;

        solve(i,n,k,temp);


        return res;
        
    }
};