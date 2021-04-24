class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        for(int i=abs(n);i>0;i=i/2){
            if(i%2){
                if(n>0){
                    ans = ans*x;
                }else{
                    ans = ans/x;
                }
            }
            x = x*x;
        }
        return ans;
    }
};