class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        if(nums.empty()){
            return 1;
        }
        sort(nums.begin(),nums.end());
        vector<int>::iterator it;
        it=find(nums.begin(),nums.end(),1);
        if(it!=nums.end()){
            for(int i=0;i<nums.size()-1;i++){
                int temp=0;
                if((nums[i]+1)!=nums[i+1] && nums[i]!=nums[i+1]){
                    temp=nums[i]+1;
                }
                if(temp>0){
                    return temp;
                }
            }
        }else{
            return 1;
        }
        int ans=nums[nums.size()-1]+1;
        return ans;
    }
};