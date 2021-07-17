class Solution {
    public int findNumbers(int[] nums) {
        int count =0;
        for(int x: nums){
            int digCount =0;
            while(x>0){
                x/=10;
                digCount++;
            }
            if(digCount %2 ==0){
                count++;
            }
        }
        return count;
    }
}