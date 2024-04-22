class Solution {
    public int mySqrt(int x) {
        if( x == 0 || x == 1){
            return x;
        }
        int lo = 1, hi = x;
        while(lo <= hi){
            int mid = lo + (hi - lo)/2;
            long square = (long)mid*mid;
            
            if(square < x){
                lo = mid + 1;
            }else if(square > x){
                hi = mid - 1;
            }else{
                return mid;
            }
        }
        return hi;
    }
}