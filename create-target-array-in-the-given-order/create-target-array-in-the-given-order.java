class Solution {
    public int[] createTargetArray(int[] nums, int[] index) {
        int n = nums.length;
        List<Integer> target = new ArrayList<>();
        for(int i =0; i< n; i++){
            target.add(index[i], nums[i]);
        }
        return target.stream().mapToInt(Integer::intValue).toArray();
    }
}