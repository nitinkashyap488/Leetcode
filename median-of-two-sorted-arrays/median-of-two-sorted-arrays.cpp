class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size()){
            return findMedianSortedArrays(nums2,nums1);
        }
        int x = nums1.size();
        int y = nums2.size();
        
        int high = x;
        int low = 0;
        while(low<=high){
            int divideX = low + (high - low)/2;
            int divideY = (x + y + 1)/2 - divideX;
            
            double maxLeftX = (divideX == 0 ? INT_MIN : nums1[divideX-1]);
            double minRightX = (divideX == x ? INT_MAX : nums1[divideX]);
            
            double maxLeftY = (divideY == 0 ? INT_MIN : nums2[divideY-1]);
            double minRightY = (divideY == y ? INT_MAX : nums2[divideY]);
            
            if(maxLeftX <= minRightY && maxLeftY <= minRightX){
                if((x+y)%2==0){
                    return (max(maxLeftX,maxLeftY) + min(minRightX,minRightY))/2.0;
                }else{
                    return max(maxLeftX,maxLeftY);
                }
            }else if(maxLeftX>minRightY){
                high = divideX-1;
            }else{
                low = divideX +1;
            }
        }
        return 0;
    }
};