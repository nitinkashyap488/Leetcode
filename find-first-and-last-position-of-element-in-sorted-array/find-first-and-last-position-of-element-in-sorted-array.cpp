class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v,ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                v.push_back(i);
            }
        }
        if(v.size()==1){
            ans.push_back(v[0]);
            ans.push_back(v[0]);
        }else if(v.empty()){
            ans.push_back(-1);
            ans.push_back(-1);
        }else{
            ans.push_back(v[0]);
            ans.push_back(v[v.size()-1]);
        }
        return ans;
    }
};