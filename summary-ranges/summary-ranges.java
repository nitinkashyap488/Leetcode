class Solution {
    public List<String> summaryRanges(int[] nums) {
        List<String> list = new ArrayList<>();
        solve(nums,list);
        return list;
    }
    public void solve(int[] nums, List<String> list){
        String str = "";
        int count = 0;
        for(int i = 0; i<nums.length ; i++){
            if(str.isEmpty()){
                str += Integer.toString(nums[i]);
            }
            if(i+1 < nums.length && nums[i+1] - nums[i] == 1){
                count++;
            }else{
                if(count != 0){
                    str += "->" + Integer.toString(nums[i]);
                }
                list.add(str);
                str = "";
                count = 0;
            }
        }
    }
}