class Solution {
public:
    int uniquePaths(int m, int n) {
        
        /*
        We create a 2D vector containing "m"
        elements each having the value "vector<int> (n, 1)".
        "vector<int> (n, 1)" means a vector having "n"
        elements each of value "1".
        Here these elements are vectors.
        */
        
        vector<vector<int>> dp(m,vector<int>(n,1));
        for(int i=m-1;i>=1;i--){
            for(int j=n-1;j>=1;j--){
                dp[i-1][j-1]=dp[i-1][j] + dp[i][j-1];
            }
        }
        return dp[0][0];
    }
};