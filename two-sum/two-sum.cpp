class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        for(auto it1=nums.begin();it1!=nums.end();it1++){
            for(auto it2=it1+1;it2!=nums.end();it2++){
                if(*it1 + *it2 == target){
                    v.push_back(it1-nums.begin());
                    v.push_back(it2-nums.begin());
                    break;
                }
            }
        }
        return v;
    }
};