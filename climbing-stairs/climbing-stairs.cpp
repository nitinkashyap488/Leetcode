class Solution {
public:
    int climbStairs(int n) {
        int arr[n+1];
        for(int i=0;i<=n;i++){ 
            arr[i]=0;
        }
        arr[1]=1;
        if(n>=2){
            arr[2]=2;
        }
        for(int i=3;i<=n;i++){
             arr[i] = arr[i-1]+arr[i-2];    
        }
        return arr[n];
    }
    
};