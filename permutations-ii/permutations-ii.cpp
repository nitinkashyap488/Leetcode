class Solution {
    void solve(vector<int>&nums, int start, vector<vector<int>>& results){
        if (start == nums.size() - 1) {
            results.push_back(nums); 
        }
            
        unordered_set<int> seen;  
        for (int i = start; i < nums.size(); ++i)
        {
            if (seen.find(nums[i]) == seen.end())
            {
                swap(nums[start], nums[i]);
                solve(nums, start+1,results);
                swap(nums[start], nums[i]);  
                seen.insert(nums[i]);
            }
        }    
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> results;
        solve(nums, 0, results);
        return results;
    }
};