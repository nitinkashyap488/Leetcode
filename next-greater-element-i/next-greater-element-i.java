class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        HashMap<Integer, Integer> map = new HashMap<>();
        Stack<Integer> stk = new Stack<>();
        
        for(int i = nums2.length - 1; i >= 0; i--){
            while(!stk.isEmpty() && stk.peek() <= nums2[i]){
                stk.pop();
            }
            map.put(nums2[i], stk.isEmpty() ? -1: stk.peek());
            stk.push(nums2[i]);
        }
        
        int[] ans = new int[nums1.length];
        for(int i = 0; i < nums1.length ; i++){
            ans[i] = map.get(nums1[i]);
        }
        return ans;
        
    }
}