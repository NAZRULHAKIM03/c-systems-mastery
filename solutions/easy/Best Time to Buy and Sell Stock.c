// Title: Best Time to Buy and Sell Stock
            // Difficulty: Easy
            // Language: C
            // Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

int maxProfit(int* prices, int pricesSize) {
    
    int profit = 0;
    int cheapest = prices[0];

    for(int i=0; i<pricesSize; i++)
    {
        if(prices[i] < cheapest)
        {
            cheapest = prices[i];
        }

    int max_profit = 0;
        profit = prices[i] - cheapest;

        if(profit > max_profit)
        {
            max_profit = profit;
        }
    }

    return max_profit;
}
