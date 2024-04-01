class Solution {
    public int maximalRectangle(char[][] matrix) {
        if(matrix == null || matrix.length == 0){
            return 0;
        }
        int rows = matrix.length;
        int cols = matrix[0].length;
        int maxArea = 0;
        
        int[] heights = new int[cols];
        
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(matrix[i][j] == '1'){
                    heights[j]++;
                }else{
                    heights[j] = 0;
                }
            }
            maxArea = Math.max(maxArea, largestRectangleArea(heights));
        }
        return maxArea;
    }
    public int largestRectangleArea(int[] heights){
        Stack<Integer> stk = new Stack<>();
        int maxArea = 0;
        int i = 0;
        while(i<heights.length){
            if(stk.isEmpty() || heights[i] >= heights[stk.peek()]){
                stk.push(i++);
            }else{
                int top = stk.pop();
                int width = stk.isEmpty()?i: i - stk.peek() - 1;
                maxArea = Math.max(maxArea, width*heights[top]);
            }
        }
        while(!stk.isEmpty()){
            int top = stk.pop();
            int width = stk.isEmpty()?i: i - stk.peek() - 1;
            maxArea = Math.max(maxArea, width*heights[top]);
        }
        return maxArea;
    }
}