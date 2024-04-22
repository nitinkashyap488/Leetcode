class Solution {
    public int[] plusOne(int[] nums) {
        int carry = 1;
        for(int i = nums.length - 1; i >= 0; i--){
            int digit = nums[i] + carry;
            nums[i] = digit % 10;
            carry = digit / 10;
        }
        if(carry > 0){
            nums = new int[nums.length + 1];
            nums[0] = carry;
        }
        return nums;
    }
}