class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int ptr =0;
        while(ptr!= nums.size()-1){
            if(nums[ptr]>nums[ptr+1]){
                for(; ptr<nums.size()-1;ptr++){
                    if(nums[ptr]<nums[ptr+1]){
                        return false;
                    }
                }
            }else if(nums[ptr]<nums[ptr+1]){
                for(; ptr<nums.size()-1;ptr++){
                    if(nums[ptr]>nums[ptr+1]){
                        return false;
                    }
                }
            }else{
                ptr++;
            }
        }
            
        return true;
    }
};