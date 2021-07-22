class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN;
        for(int i =0; i<nums.size();i++){
            int sum = 0;
            for(int j = i; j<nums.size();j++){
                sum += nums[j];
                ans = max(sum,ans);
            }
        }
        return ans;
    }
};
