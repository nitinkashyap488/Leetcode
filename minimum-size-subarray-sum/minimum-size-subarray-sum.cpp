class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n= nums.size();
        int ans = INT_MAX;
        int i = 0, j = 0;
        int sum = 0;
        while(i<n){
            sum += nums[i];
            while(sum>=target){
                ans = min(ans, i+1-j);
                sum -= nums[j++];
            }
	i++;
        }
        return (ans!= INT_MAX)?ans:0;
    }
};
