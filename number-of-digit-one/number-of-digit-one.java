class Solution {
    public int countDigitOne(int n) {
        // for n = 13
        //  1 , 2, 3, 4,5,6,7,8,9,10,11,12,13
        // 1, 10, 11,12,13
        //total no. of 1 = 1 + 1 + 2 + 1 +1 = 6 , we need to add the initial 1.
        
        int count = 0;
        for(int i = 1; i <= n; i*= 10){
            int divide = i * 10;
            count += (n / divide) * i  ;    
            int  max = 0;
            int dig = n % divide - i + 1;
            if(max < dig){
                max = dig;
            }else{
                max = 0;
            }
            if(dig < i){
                count += max;
            }else{
                count += i;
            }
            
        }
        return count;
    }
}