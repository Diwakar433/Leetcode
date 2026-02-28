1class Solution {
2    public int maxProfit(int[] prices) {
3
4        int i = 0, j = 1, profit = 0;
5        int n = prices.length;
6        while(i < n && j < n) {
7            if(prices[i] > prices[j]) {
8                i = j;
9                j++;
10            }
11            else {
12                profit = Math.max(profit, (prices[j]-prices[i]));
13                j++;
14            }
15        }
16
17        return profit;
18       
19    }
20}