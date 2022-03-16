class Solution {
    void solve(vector<int> &nums, int start, int end){
        int i = start;
        int j = end;
        while(i < j){
            swap(nums[i++], nums[j--]);
        }
    }
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        if(k<0){
            k += n;
        }
        
        solve(nums, 0, n-k-1);
        solve(nums, n-k, n-1);
        solve(nums, 0, n - 1);
    }
};