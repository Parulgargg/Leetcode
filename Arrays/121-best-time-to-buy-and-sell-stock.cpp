//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
// 121. Best time to buy and sell stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> bestBuy(prices.size());
        bestBuy[0]=INT_MAX;
        for(int i=1;i<prices.size();i++){
            bestBuy[i]=min(bestBuy[i-1],prices[i-1]);
        }
        int maxProfit=0;
        for(int i=0;i<bestBuy.size();i++){
            int currProfit = prices[i]-bestBuy[i];
            maxProfit=max(maxProfit,currProfit);
        }
        return maxProfit; 
    }
};