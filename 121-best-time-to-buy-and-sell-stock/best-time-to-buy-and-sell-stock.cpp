class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int buy = INT_MAX;
        int profit = INT_MIN;

        for(auto x: prices){
            if(x<buy) buy= x;

            int dayp = x-buy;
            profit = max(profit,dayp);
        }

        return profit;
        
    }
};