class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i =0, j = k;
        double sum = 0;
        for(int z=i; z<j;z++){
            sum += nums[z];
        }
        double ans = sum /k;
        while(j<nums.size()){
            sum += (nums[j]- nums[i]);
            double avg = sum /k;
            ans = max(avg,ans);
            j++;i++;
        }
        return ans;
    }
};
