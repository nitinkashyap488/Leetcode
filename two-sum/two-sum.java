class Solution {
    public int[] twoSum(int[] nums, int target) {
        int n = nums.length;
        Map<Integer, Integer> mp = new HashMap<>();
        for(int i =0; i <n ; i++){
            if(mp.containsKey(target - nums[i])){
                return new int[] { mp.get(target - nums[i]),i};
            }
            mp.put(nums[i],i);
        }
        return new int[] {-1,-1};
    }
}