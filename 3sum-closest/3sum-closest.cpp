class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans=INT_MAX,sol;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            int j=i+1,k=nums.size()-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(ans>abs(sum-target)){
                    ans=abs(sum-target);
                    sol=nums[i]+nums[j]+nums[k];
                }
                if((sum-target)>0){
                    k--;
                }else if((sum-target)<0){
                    j++;
                }else{
                    return target;
                }
            }
        }
        return sol;
    }
};