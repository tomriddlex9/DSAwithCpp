#include <bits/stdc++.h>
using namespace std;
// recursive approach that creates a recursive binary tree for all possible pairs of value
// where j>i and price[j]>price[i] , then creates two partitions to look for such pairs


// time complexity = omega(n^2) i.e the lower bound is n^2 
// will always take more than n^2 computations with this approach 
int stockRecursive(vector<int> prices, int start, int end)
{
    // if there is no stock to buy ans sell
    // or we have reached dead end on recursive calls
    if (end <= start)
        return 0;
    // intialise the profit
    int profit = 0;
    // iterate from start to end to choose buying position
    for (int i = start; i < end; i++)
    {
        // iterate over all possible values after buying to sell
        for (int j = i + 1; j <= end; j++)
        {
            // only if the stock price is higher than its cost price
            // i.e selling price is greater than buying price of stock
            if (prices[j] > prices[i])
            {
                // if bought once then iterate for more buy sell pairs on the left of buy and right of selling day 
                int currProfit = (prices[j] - prices[i]) + stockRecursive(prices, start, i - 1) + stockRecursive(prices, j + 1, end);

                // if any possible combination gives value more than maximum profit than change the profit counter 
                profit = max(profit, currProfit);
            }
        }
    }
    return profit;
}
// in the market just look for increasing value pairs on the days 
// where the preceding value is greater than succedding , add such pair to profit 
// return final profit 

// time complexity = O(n)
int stockEfficient(vector<int> prices)
{
    int n{prices.size() - 1};
    int profit{0};
    for (int i = 1; i <= n; i++)
    {
        if (prices[i] > prices[i - 1])
        {
            profit += (prices[i] - prices[i - 1]);
        }
    }
    return profit;
}
int main()
{
    vector<int> prices = {1, 5, 3, 8, 12};
    int n{prices.size() - 1};
    cout << stockRecursive(prices, 0, n) << endl;
    cout << stockEfficient(prices) << endl;
}