class Solution {
public:
    long long int solve(long long int n){
        long long int count = 0;
        long long int x = 5;
        while(x<=n){
            count+= n/x;
            x = x*5;
        }
        return count;
    }
    int preimageSizeFZF(int k) {
        long long int start = 0;
        long long int end = LONG_MAX;
        while(start<=end){
            long long int mid = start + (end - start)/2;
            long long int x = solve(mid);
            if(x==k){
                return 5;
            }else if(x>k){
                end = mid -1;
            }else{
                start = mid +1;
            }
        }
        return 0;
    }
};