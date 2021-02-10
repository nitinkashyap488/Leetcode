class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int mx=0;
        int ans;
        for(auto x:mp){
            if(x.second>mx){
                mx=x.second;
                ans=x.first;
            }
        }
        return ans;
    }
};