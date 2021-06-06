class Solution {
public:
    int subtractProductAndSum(int n) {
        long long int prod=1,sum =0;
        while(n){
            int temp = n%10;
            prod = prod*temp;
            sum = sum + temp;
            n=n/10;
        }
        return prod-sum;
    }
};