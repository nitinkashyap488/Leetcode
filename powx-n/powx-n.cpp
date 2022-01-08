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



// class Solution {
//     double helper(double x, int n){
//         if(n == 0){
//             return 1;
//         }
//         if(n == 1){
//             return x;
//         }
        
//         double ans = helper(x, n/2);
//         if(n%2 == 0){
//             return ans*ans;
//         }else{
//             return x*ans*ans;
//         }
//     }
// public:
//     double myPow(double x, int n) {
//         double ans = helper(x,n);
//         if(n>=0){
//             return ans;
//         }else{
//             return 1/ans;
//         }
//     }
// };
