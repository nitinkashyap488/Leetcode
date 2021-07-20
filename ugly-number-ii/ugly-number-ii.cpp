class Solution {
public:
    int nthUglyNumber(int n){
        
/*************************************** using set **************************************/
        
        set<long> possible,fix;
        possible.insert(1);
        while(fix.size() != n){
            long nextUgly = *possible.begin();
            fix.insert(nextUgly);
            possible.erase(nextUgly);
            possible.insert(2*nextUgly);
            possible.insert(3*nextUgly);
            possible.insert(5*nextUgly);
        }
        return *fix.rbegin();
    }
    
    /**************************** DP Approach Failed ************************************/
    // bool solve(int num, vector<bool> &dp){
    //     if(dp[num]== true){
    //         return dp[num];
    //     }
    //     int n = num;
    //     while(n>0){
    //         if(n%2==0){
    //             return solve(n/2,dp);
    //         }else if(n%3==0){
    //             return solve(n/3,dp);
    //         }else if(n%5 ==0){
    //             return solve(n/5,dp);
    //         }else{
    //             break;
    //         }
    //     }
    //     if(n==1){
    //         return dp[num] = true;
    //     }else{
    //         return dp[num] = false;
    //     }
    // }
    // int nthUglyNumber(int n) {
    //     vector<bool> dp(INT_MAX,false);
    //     vector<long long>ans;
    //     int count =0,i=1;
    //     while(count!= n){
    //         if(solve(i,dp)){
    //             ans.push_back(i);
    //             count++;
    //         }
    //         i++;
    //     }
    //     return ans.back();
    // }
};