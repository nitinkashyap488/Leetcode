class Solution {
    public boolean isHappy(int n) {
        int sum =0;
        while(n>0){
            sum+= Math.pow(n%10,2);
            n/=10;
        }
        if(sum ==1 || sum ==7){
            return true;
        }else if(sum<10){
            return false;
        }else{
            return isHappy(sum);
        }
    }
}