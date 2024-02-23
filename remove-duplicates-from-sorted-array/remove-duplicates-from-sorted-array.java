class Solution {
    public int removeDuplicates(int[] nums) {
        int n = nums.length;
        if(n ==0 || n == 1){
            return n;
        }
        int count = 0;
        for(int i =0; i < n-1 ; i++){
            if(nums[i] != nums[i+1]){
                nums[count++] = nums[i];
            }
        }        
        nums[count++] = nums[n-1];
        return count;
    }
}