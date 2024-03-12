class Solution {
    public void sortColors(int[] nums) {
        int low =0, high = nums.length-1;
        for(int i =0; i<=high; i++){
            if(nums[i] == 0){
                swap(nums, i, low);
                low++;
            }else if(nums[i] == 2){
                swap(nums, i, high);
                high--;
                i--;
            }
        }
    }
    private static void swap(int[] nums, int i, int j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}