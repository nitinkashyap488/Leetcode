class Solution {
    long long int MOD = 1000000007;
public:
    int solve(int d, int f, int target,vector<vector<int>> &dp){
        if(target<d || target> d*f){
            return 0;
        }
        if(d==1) return (f>=target)?1:0;
        
        if(dp[d][target] != -1){
            return dp[d][target];
        }
        int sum =0;
        for(int i =1; i<=f;i++){
            sum += solve(d-1,f,target -i,dp);
            sum %= MOD;
        }
        return dp[d][target] = sum;
    }
    
    int numRollsToTarget(int d, int f, int target) {
        vector<vector<int>> dp(31,vector<int>(1001,-1));
        return solve(d,f,target,dp);
    }
};