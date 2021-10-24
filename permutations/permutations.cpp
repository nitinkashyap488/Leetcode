class Solution {
    void solve(vector<int>&nums, vector<int>& arr, vector<vector<int>>& result){
        if( arr.size() == nums.size()){
            result.push_back(arr);
            return;
        }
        
        for(int i = 0; i<size(nums); i++){
            if(find(arr.begin(), arr.end(), nums[i]) == arr.end()){
                arr.push_back(nums[i]);
                solve(nums,arr,result);
                arr.pop_back(); 
            }  
        }        
    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> arr;
        vector<vector<int>> result;
        solve(nums, arr, result);
        return result;
    }
};