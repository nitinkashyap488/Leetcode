class Solution {
public:
    
//*********************prefix Sum Algorithm***************************//
    
    int subarraySum(vector<int>& nums, int k) {
        
        if(nums.size() ==0) return 0;
        map<int, int>mp;
        int count =0;
        int CurrSum =0;
        for(int i =0; i< nums.size(); i++){
            CurrSum += nums[i];
            if(CurrSum == k){
                count++;
            } 
            if(mp.find(CurrSum - k) != mp.end()){
                count += (mp[CurrSum-k]);
            }
            mp[CurrSum]++;
        }
        return count;
    }
};