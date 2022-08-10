class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int maxEnd = prices[0];
        for(int i=1;i<prices.size();i++){
            maxEnd = min(prices[i], maxEnd);
            profit = max(profit, prices[i]- maxEnd);
        }
        return profit;
    }
};