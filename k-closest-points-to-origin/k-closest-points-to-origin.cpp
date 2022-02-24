class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        multimap<int, int> mp;
        for(int i = 0; i< n; i++){
            mp.insert({points[i][0]*points[i][0] + points[i][1]*points[i][1], i});
        }
        
        vector<vector<int>> ans;
        int count = 0;
        for(auto x: mp){
            if(count < k){
                ans.push_back(points[x.second]);
                count++;
            }
        }
        return ans;
    }
};