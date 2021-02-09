class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        stack<int>s;
        for(int i=0;i<nums.size();i++){
            if(!s.empty()){
                if(s.top()==nums[i]){
                    s.pop();
                }else{
                    s.push(nums[i]);
                }
            }else{
                s.push(nums[i]);
            }
        }
        int ans= s.top();
        return ans;
    }
};