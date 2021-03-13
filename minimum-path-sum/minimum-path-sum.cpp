class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();   //row
        int n = grid[0].size();   //column
        
        /*
        We create a 2D vector containing "m"
        elements each having the value "vector<int> (n, 0)".
        "vector<int> (n, 0)" means a vector having "n"
        elements each of value "0".
        Here these elements are vectors.
        */
        vector<vector<int>> dp(m, vector<int>(n,0));
        
        // initializing st element of dp
        dp[0][0]=grid[0][0];
        
        // initializing 1st row
        for(int i=1;i<m;i++){
            dp[i][0]=dp[i-1][0] + grid[i][0];
        }
        
        // initializing 1st column
        for(int i=1;i<n;i++){
            dp[0][i]=dp[0][i-1] + grid[0][i];
        }
        
        // actual code
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                dp[i][j] = min(dp[i-1][j],dp[i][j-1]) +grid[i][j];
            }
        }
        return dp[m-1][n-1];
    }
};
