class Solution {
    public int largestRectangleArea(int[] heights) {
        Stack<Integer> stk = new Stack<>();
        int maxArea = 0;
        int i = 0;
        while (i < heights.length) {
            if (stk.isEmpty() || heights[i] >= heights[stk.peek()]) {
                stk.push(i);
                i++;
            } else {
                int top = stk.pop();
                int width = stk.isEmpty() ? i : i - stk.peek() - 1;
                maxArea = Math.max(maxArea, heights[top] * width);
            }
        }
        while (!stk.isEmpty()) {
            int top = stk.pop();
            int width = stk.isEmpty() ? i : i - stk.peek() - 1;
            maxArea = Math.max(maxArea, heights[top] * width);
        }
        return maxArea;
    }
}