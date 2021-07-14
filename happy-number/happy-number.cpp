class Solution {
public:
    map<int,bool>dp;
    bool isHappy(int n) {
        if(n==1){
            return true;
        }
        if(dp[n]==true){
            return false;
        }
        dp[n] = true;
        int sum =0;
        while(n>0){
            int dig = n%10;
            sum += dig*dig;
            n = n/10;
        }
        return isHappy(sum);
    }
};
