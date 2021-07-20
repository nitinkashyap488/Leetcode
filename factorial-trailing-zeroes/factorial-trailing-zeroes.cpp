class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;
        int x = 5;
        while(x<=n){
            count+= n/x;
            x = x*5;
        }
        return count;
        
        
// ************************************* OLD Solution *******************************************//
        // int count=0,temp=n;
        // while(temp){
        //     temp=temp/5;
        //     count++;
        // }
        // int ans=0;
        // for(int i=1;i<=count;i++){
        //     ans+= n/pow(5,i);
        // }
        // return ans;
    }
};
