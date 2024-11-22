class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // Initialize the minimum buy price as the first price in the array
        int buyPrice = prices[0];

        // Initialize the maximum profit as 0
        int maxProfit = 0;

        // Iterate through the array of prices starting from the second price (index 1)
        for (int i = 1; i < prices.size(); i++) {
            // Update the maximum profit if the current profit (prices[i] - buyPrice) is
            // greater This is done by comparing the current profit with the previous
            // maximum profit
            maxProfit = max(maxProfit, prices[i] - buyPrice);

            // Update the minimum buy price if the current price is lower
            // This is done by comparing the current price with the previous minimum buy
            // price
            buyPrice = min(buyPrice, prices[i]);
        }

        // Return the maximum possible profit
        return maxProfit;
    }
};
