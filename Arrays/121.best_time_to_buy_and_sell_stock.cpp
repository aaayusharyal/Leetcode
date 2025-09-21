class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int smallest = prices[0];
        int maxprofit = 0;
        for(int i=1; i<prices.size(); i++)
        {
            if(prices[i] < smallest)
            {
                smallest = prices[i];
            }
            int profit = prices[i] - smallest;
            if(profit>maxprofit)
            {
                maxprofit = profit;
            }
        }  
        return maxprofit;  
    }
};
