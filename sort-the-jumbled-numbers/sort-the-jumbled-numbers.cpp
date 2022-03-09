class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<int> result;
        multimap<int, int> mp;
        for(auto x: nums){
            int ans = 0, count = 0;
            int temp = x;
            while(x > 0){
                int dig = x%10;
                x = x/10;
                ans = mapping[dig] * pow(10,count) + ans;
                count++;
            }
            if(temp){
                mp.insert({ans, temp});
            }else{
                mp.insert({mapping[temp], temp});
            }
            
        }
        
        for(auto x: mp){
            result.push_back(x.second);
        }
        return result;
    }
};