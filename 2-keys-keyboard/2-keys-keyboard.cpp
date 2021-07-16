class Solution {
public:
    
    int minSteps(int n) {
        vector<int> dp(n+1,INT_MAX);
        dp[0] = 0;
        dp[1] = 0;
        for(int i =1; i<=n;i++){
            for(int j = 2; i*j <=n; j++){
                 dp[i*j] = min(dp[i*j], dp[i] + j);
            }
        }
        
        return dp.back();
    }
    
    
    /****************************** Alternate Solution with faster than 100% submission ************/
    // int ans = 0, d = 2;
    //     while (n > 1) {
    //         while (n % d == 0) {
    //             ans += d;
    //             n /= d;
    //         }
    //         d++;
    //     }
    //     return ans;
};
