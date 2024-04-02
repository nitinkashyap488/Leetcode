class Solution {
    public int maxDepth(String s) {
        Stack<Character> stack = new Stack<>();
        int maxDepth = 0;
        int currentDepth = 0;
        
        for (char ch : s.toCharArray()) {
            if (ch == '(') {
                stack.push(ch);
                currentDepth++;
                maxDepth = Math.max(maxDepth, currentDepth);
            } else if (ch == ')') {
                if (!stack.isEmpty() && stack.peek() == '(') {
                    stack.pop();
                    currentDepth--;
                } else {
                    return -1;
                }
            }
        }
        
        if (!stack.isEmpty()) {
            return -1;
        }
        
        return maxDepth;
    }
}