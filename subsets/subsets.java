class Solution {
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> list = new ArrayList<>();
        List<Integer> subList = new ArrayList<>();
        helper(nums, 0,subList, list);
        return list;
    }
    public static void helper(int[] nums,int index, List<Integer> sub, List<List<Integer>> list){
        list.add(new ArrayList<>(sub));
        for(int i = index; i < nums.length  ; i++){
            sub.add(nums[i]);
            helper(nums, i + 1, sub, list);
            sub.remove(sub.size() - 1);
        }
    }
}