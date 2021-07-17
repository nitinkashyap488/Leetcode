class Solution {
    public int countNumbersWithUniqueDigits(int n) {
        //9 * 9 + 10 for n = 2
        //9 * 9 * 8 + 10 for n = 3
        //9 * 9 * 8 * 7 + 10 for n = 4
        //9 * 9 * 8 * 7 * 6 + 10 for n = 5
        
        int ans = 10;
        if(n == 0){
            return 1;
        }else if(n == 1){
            return 10;
        }else{
            int product = 9;
            for(int i = 2; i <= n; i++){
                product = product * (11 - i);
                ans += product;
            }
        }
        return ans;
    }
}