class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        
        // let's seperate this into two subset of positive and negative numbers.
        // Also the sum of S1 subset and S2 subset will be Sum, (regardless of sign)
        // so we can write S2 = sum - s1
        // according to question, there difference, S1 - S2 = target
        // so S1 - (Sum - S1) = target
        // S1 = (target + sum)/2
        
        int s = 0, sum =0,n = nums.size();
        for(int i=0;i<n;i++){
            sum+= nums[i];
        }
        s = target + sum;
        if(s % 2 != 0)
            return 0;
        s = s / 2;    
        
        // now this is simple 0/1 knapsack problem with nums array as item ans S1 as Capacity.
        
        vector<vector<int>> dp(n+1,vector<int>(s+1,0));
        for(int i =0;i<=n;i++){
            dp[i][0] = 1;
        }
        for(int i =1; i<=n;i++){
            for(int j =0; j<=s;j++){
                if(nums[i-1]<=j){
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-nums[i-1]];
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][s];
    }
};