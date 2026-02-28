1class Solution {
2    public int maxProfit(int[] prices) {
3        
4        int buy = prices[0];
5        int profit = 0;
6        for(int i = 1; i < prices.length; i++) {
7            if(buy > prices[i]) {
8                buy = prices[i];
9            }
10            else {
11                profit = Math.max(profit, prices[i]-buy);
12            }
13        }
14
15        return profit;
16    }
17}