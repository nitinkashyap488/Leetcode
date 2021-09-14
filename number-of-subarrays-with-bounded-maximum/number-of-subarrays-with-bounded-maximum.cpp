class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int ans = 0, low = 0, high = 0;
        for (auto num : nums) {
            if (num > right){
                 high = 0;
            }else{
                ans += ++high;
            }
            if(num >= left){ 
                low = 0;
            }else{
                ans -= ++low;
            }
        }
        return ans;
    }
};