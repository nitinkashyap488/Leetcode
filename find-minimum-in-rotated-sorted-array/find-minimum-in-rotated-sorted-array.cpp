class Solution {
public:
    int findMin(vector<int>& nums) {
        int n= nums.size();
        if(n==1){
            return nums[0];
        }
        int low = 0, high = n-1;
        while(low <= high){
            int mid = low + (high-low)/2;
            int prev = (mid + n -1)%n;
            int next = (mid + 1)%n;
            if(nums[mid]<nums[prev] && nums[mid]<nums[next]){
                return nums[mid];
            }
            if(nums[high]<nums[mid]){
                low = mid +1;
            }else{
                high = mid -1;
            }
        }
        return -1;
    }
};