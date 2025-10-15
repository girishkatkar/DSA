class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0;
        int cheaper_buy=prices[0];
        int profit;

        for (int i=1; i<prices.size(); i++){
            if (prices[i]<cheaper_buy) cheaper_buy=prices[i];
            profit= prices[i]-cheaper_buy;
            if (profit>max_profit) max_profit=profit;
        }
    return max_profit;}
};