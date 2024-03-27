class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int sumOfAll = n * (n + 1) / 2;
        int sum = 0;
        
        for (int x : nums) {
            sum += x;
        }
        
        return sumOfAll - sum;
        
    }
}