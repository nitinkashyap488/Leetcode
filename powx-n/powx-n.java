class Solution {
    public double myPow(double x, int n) {
        if(n == 0){
            return 1;
        }
        double temp = myPow(x, n/2);
        if(n%2 == 0){
            temp = temp*temp;
        }else{
            if(n>0){
                temp = temp * temp * x;
            }else{
                temp = (temp * temp) / x; 
            }
        }
        return temp;
        
    }
}