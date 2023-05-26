class Solution {
    public int trap(int[] height) {
        int n = height.length, water = 0;
        if(n <= 2 ){
            return 0;
        }
        int i = 1, j = n-2;
        int leftMax = height[0];
        int rightMax = height[n-1];
        while(i <= j){
            if(leftMax < rightMax){
                if(leftMax < height[i]){
                    leftMax = height[i];
                }else{
                    water += leftMax - height[i];
                }
                i++;
            }else{
                if(rightMax < height[j]){
                    rightMax = height[j];
                }else{
                    water += rightMax - height[j];
                }
                j--;
            }
            
        }
        return water;
    }
}