class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        int prod=1;
        for(int i =0; i<nums.size();i++){
            result.push_back(prod);
            prod *= nums[i];
        }
        prod = 1;
        for(int i = nums.size()-1; i>=0; i--){
            result[i] *= prod;
            prod = prod*nums[i];
        }
        return result;
    }
};