class Solution {
public:
    int solve(vector<int>& nums, int goal){
        if(goal<0) return 0;
        
        int lo = 0, n = nums.size();
        int CurrSum = 0, count = 0;
        for(int hi =0; hi< n;hi++){
            CurrSum += nums[hi];
            while(CurrSum > goal){
                CurrSum -= nums[lo++];
            }
            count += hi - lo + 1;
        }
        return count;
        
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return solve(nums,goal) - solve(nums,goal-1);
        
    }
};