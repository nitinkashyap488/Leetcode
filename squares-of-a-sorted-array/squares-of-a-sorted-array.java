class Solution {
    public int[] sortedSquares(int[] nums) {
        int[] arr = new int[nums.length];
        int i = 0, j = nums.length -1;
        int index = nums.length -1;
        while(i <= j){
            int left = nums[i]*nums[i];
            int right = nums[j]*nums[j];
            
            if(left > right){
                arr[index--] = left;
                i++;
            }else{
                arr[index--] = right;
                j--;
            }
        }
        return arr;
    }
}