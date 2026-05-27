class Solution {
public:
    int maxProfit(vector<int>& prices) {
       if (prices.size() == 1)
        return 0;
       int size = prices.size(); 
       int l = 0;
       int r = 1;
       int profit = 0;
       while (r < size)
       {
            if (prices[r] < prices[l])
            {
                l = r;
            }
            if ((prices[r] - prices[l]) > profit)
            {
                profit = prices[r] - prices[l];
            }
            r++;
       } 
        return profit;
    }
};
