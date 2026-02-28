class Solution {
    public int maxProfit(int[] prices) {

        int i = 0, j = 1, profit = 0;
        int n = prices.length;
        while(i < n && j < n) {
            if(prices[i] > prices[j]) {
                i = j;
                j++;
            }
            else {
                profit = Math.max(profit, (prices[j]-prices[i]));
                j++;
            }
        }

        return profit;
       
    }
}