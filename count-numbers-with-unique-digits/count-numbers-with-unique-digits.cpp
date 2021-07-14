class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        int ans = 10;
        if(n==0){
            return 1;
        }else if(n==1){
            return 10;
        }else{
            int sum =9;
            for(int i =2;i<=n;i++){
                sum*=(11-i);
                ans=ans+sum;
            }
        }
        return ans;
    }
};