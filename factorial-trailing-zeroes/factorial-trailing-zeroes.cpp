class Solution {
public:
    int trailingZeroes(int n) {
        int count=0,temp=n;
        while(temp){
            temp=temp/5;
            count++;
        }
        int ans=0;
        for(int i=1;i<=count;i++){
            ans+= n/pow(5,i);
        }
        return ans;
    }
};