class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int count = 0;
        for(auto x: nums){
            s.insert(x);
        }
        for(auto x : nums){
            if(s.find(x-1) == s.end()){
                int length = 1;
                int num = x + 1;
                while(s.find(num) != s.end()){
                    length++;
                    num++;
                }
                count = max (count, length);
            }
        }
        return count;
    }
};