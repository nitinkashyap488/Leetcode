class Solution {
    public int majorityElement(int[] nums) {
        
        int majorityElement = nums[0];
        int count = 0;
        for(int i =0; i<nums.length; i++){
            if(majorityElement == nums[i]){
                count++;
            }else{
                count--;
                if(count == 0){
                    majorityElement = nums[i];
                    count = 1;
                }
            }
        }
        return majorityElement;
        
    }
}