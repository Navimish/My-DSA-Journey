class Solution {
public:
    vector<vector<int>> res;

    void solve(int start, vector<int> num, vector<int>& temp) {

        res.push_back(temp);

        for (int i = start; i <num.size(); i++){

            if(i>start && num[i]==num[i-1]) continue;

            temp.push_back(num[i]);
            solve(i+1,num,temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& num) {

        sort(num.begin(), num.end());

        vector<int> temp;
        solve(0, num, temp);

        return res;
    }
};