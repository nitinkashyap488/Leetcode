class Solution {
public:
    int countDigitOne(int n) {
        long long int count =0;
        for(long long int i =1;i<=n;i*=10){
            long long int div = i*10;
            count += (n/div)*i+min((int)max((int)(n%div-i+1),(int)0),(int)i);
        }
        return count;
    }
};