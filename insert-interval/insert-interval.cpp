class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        for(auto x: intervals){
            if(x[1]<newInterval[0]){
                ans.push_back(x);
            }else if(x[0]>newInterval[1]){
                ans.push_back(newInterval);
                newInterval = x;
            }else{
                newInterval[0] = min(x[0],newInterval[0]);
                newInterval[1] = max(x[1],newInterval[1]);
            }            
        }
        ans.push_back(newInterval);
        return ans;
    }
};