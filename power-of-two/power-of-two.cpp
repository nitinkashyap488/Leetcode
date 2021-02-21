class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long int k=1;
        if(n==1){
            return true;
        }else{
            while(k<n){
                k=k*2;
                if(k==n){
                    return true;
                }
            }
        }
        return false;
    }
};