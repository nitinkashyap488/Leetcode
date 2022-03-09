class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int, int> mp;
        for(int i =0; i<nums.size() - 1 ; i++){
            if(nums[i] == key){
                if(mp.find(nums[i+1])!= mp.end()){
                    mp[nums[i+1]]++;
                }else{
                    mp.insert({nums[i+1],1});
                }
            }
        }
        int count = 0;
        int ans = 0;
        
        for(auto x: mp){
            if(x.second > count){
                count = x.second;
                ans = x.first;
            }
        }
        return ans;
    }
};