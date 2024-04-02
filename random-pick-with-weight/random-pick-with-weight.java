class Solution {

    int[] prefixSum;
    Random random;

    public Solution(int[] w) {
        prefixSum = new int[w.length];
        random = new Random();
        
        prefixSum[0] = w[0];
        for (int i = 1; i < w.length; i++) {
            prefixSum[i] = prefixSum[i - 1] + w[i];
        }
    }
    
    public int pickIndex() {
        int totalSum = prefixSum[prefixSum.length - 1];
        int target = random.nextInt(totalSum) + 1;
        
        for (int i = 0; i < prefixSum.length; i++) {
            if (prefixSum[i] >= target)
                return i;
        }
        
        return -1;
    }
}

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(w);
 * int param_1 = obj.pickIndex();
 */