class Solution {
    public int[] rearrangeArray(int[] nums) {
        List<Integer> positive = new ArrayList<>();
        List<Integer> negative = new ArrayList<>();
        
        for(int x: nums){
            if(x > 0){
                positive.add(x);
            }else{
                negative.add(x);
            }
        }
        
        int posIndex = 0;
        int negIndex = 0;
        for(int i =0; i< nums.length ; i++){
            if(i % 2 == 0 && posIndex < positive.size()){
                nums[i] = positive.get(posIndex++);
            }
            if(i % 2 == 1 && negIndex < negative.size()){
                nums[i] = negative.get(negIndex++);
            }
        }
        return nums;
    }
}