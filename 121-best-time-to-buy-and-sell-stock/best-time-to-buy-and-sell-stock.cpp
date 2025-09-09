class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int buy = INT_MAX;
        int maxprofit = INT_MIN;
        int profit = 0;

        for(auto x : prices){

            buy = min(buy,x);
            profit = x-buy;
            maxprofit = max(maxprofit,profit);
        }

        return maxprofit;
        
    }
};