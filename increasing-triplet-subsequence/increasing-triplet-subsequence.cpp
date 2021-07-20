class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int low = INT_MAX;
        int mid = INT_MAX;
        
        for(int i=0;i<nums.size();i++){
            
            if(nums[i] <= low){
                low = nums[i];
            }else if(nums[i] <= mid){
                mid = nums[i];
            }else{
                return true;
            }
        }
        
        return false;
    }
};
