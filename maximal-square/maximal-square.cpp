class Solution {
public:
    int maximalSquare(vector<vector<char>>& arr) {
        int n = arr.size();
        int m = arr[0].size();
        vector<vector<int>> dp(n,vector<int>(m,0));
        int ans = 0;

        for(int i = n-1; i >=0; i--){
            for(int j = m-1; j >=0 ; j--){
                if(i == n-1 || j == m-1){
                    dp[i][j] = arr[i][j] - '0';
                    ans = max(ans, dp[i][j]);
                }else{
                    if(arr[i][j] == '0'){
                        dp[i][j] = 0;
                    }else{
                        dp[i][j] = min(min(dp[i+1][j], dp[i][j+1]), dp[i+1][j+1]) + 1;
                        ans = max(ans, dp[i][j]);
                    }
                }
            }
        }
        return ans*ans;
    }
};