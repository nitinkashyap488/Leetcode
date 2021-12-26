class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        int lo = 0, hi = 0;
        for(int i =0; i<s.size();i++){
            hi = max(hi, (int)(s.find_last_of(s[i])));
            if(i == hi) {
                ans.push_back(hi - lo + 1);
                lo = hi + 1;
            }
        }
        return ans;
    }
};