class Solution {
    public int[] searchRange(int[] nums, int target) {
        int i =0, j = nums.length -1;
        while(i <= j){
            int mid = i + (j -i)/2;
            if(nums[mid] < target){
                i = mid + 1;
            }else if(nums[mid] > target){
                j = mid - 1;
            }else{
                int lo = mid;
                int hi = mid;
                while(lo > 0 && nums[lo - 1] == target){
                    lo--;
                }
                while(hi < nums.length - 1 && nums[hi + 1] == target){
                    hi++;
                }
                return new int[]{lo, hi};
            }
        }
        return new int[]{-1,-1};
    }
}