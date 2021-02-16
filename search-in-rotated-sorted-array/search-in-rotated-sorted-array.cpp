class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0; 
        if(nums.size()==1 && nums[i]==target){
            return i;
        }
        int j=nums.size()-1;
        while(i<=j){
            if(nums[i]==target){
                return i;
            }else{
                i++;
            }
            if(nums[j]==target){
                return j;
            }else{
                j--;
            }
        }
        return -1;
    }
};