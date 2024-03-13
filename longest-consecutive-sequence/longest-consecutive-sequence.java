class Solution {
    public int longestConsecutive(int[] nums) {
        if(nums.length == 0){
            return 0;
        }
        int maxLen = 1;
        HashSet<Integer> set = new HashSet<>();

        for (int x : nums) {
            set.add(x);
        }

        for (int x : set) {
            int count = 1;
            if (set.contains(x - 1)) {
                continue;
            } else {
                while (set.contains(x + 1)) {
                    count++;
                    x++;
                }
            }
            maxLen = Math.max(maxLen, count);
        }

        return maxLen;
    }
}