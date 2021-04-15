class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n<=2){
            return 0;
        }
        int leftmax = height[0];
        int rightmax = height[n-1];
        int i=1,j=n-2;
        int water=0;
        while(i<=j){
            if(leftmax<rightmax){
                if(leftmax<height[i]){
                    leftmax = height[i];
                }else{
                    water += (leftmax-height[i]);
                }
                i++;
            }else{
                if(rightmax<height[j]){
                    rightmax=height[j];
                }else{
                    water += (rightmax-height[j]);
                }
                j--;
            }
        }
        return water;
    }
};