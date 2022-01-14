class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        vector<bool> dp(n+1, false);
        dp[n] = true;
        
        for(int i = n-1; i>=0; i--){
            for(auto w:wordDict){
                int t = w.size();
                if((i+t <= n) and s.substr(i,t) == w){
                    dp[i] = dp[i + t];
                }
                if(dp[i]==true){
                    break;
                }
            }
        }        
        return dp[0];
    }
};