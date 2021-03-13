class Solution {
public:
    int numDecodings(string s) {
        if(s[0]=='0'){
            return 0;
        }
        if(s.size()==1){
            return 1;
        }
        vector<int> dp(s.size() +1,0);
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=s.size();i++){
            int n= s[i-1]-'0';
            int m= (s[i-2]-'0')*10 + (s[i-1]-'0');
            if(n>0){
                dp[i]+= dp[i-1];
            }
            if(m>9 && m<27){
                dp[i]+=dp[i-2];
            }
        }
        return dp[s.size()];
    }
};