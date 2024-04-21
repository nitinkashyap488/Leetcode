class Solution {
    public int maxProfit(int[] prices) {
        int maxProfit = 0;
        int minTillNow = prices[0];
        for(int i = 0; i< prices.length; i++){
            if(prices[i] < minTillNow){
                minTillNow = prices[i];
            }
            maxProfit = Math.max(maxProfit, prices[i] - minTillNow);
        }
        return maxProfit;
    }
}