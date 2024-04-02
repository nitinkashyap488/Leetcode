class Solution {
    public int maxDepth(String s) {
        int maxDepth = 0;
        int currentDepth = 0;
        
        for (char ch : s.toCharArray()) {
            if (ch == '(') {
                currentDepth++;
                maxDepth = Math.max(maxDepth, currentDepth);
            } else if (ch == ')') {
                if (currentDepth > 0) {
                    currentDepth--;
                } else {
                    return -1;
                }
            }
        }
        
        return currentDepth == 0 ? maxDepth : -1;
    }
}
