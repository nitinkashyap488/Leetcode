class Solution {
    public int maxProfit(int[] prices) {
        int mini = Integer.MAX_VALUE, ans = 0;
        for(int i =0; i< prices.length; i++){
            mini = Math.min(mini, prices[i]);
            ans = Math.max(ans, prices[i] - mini);
        }
        return ans;
    }
}