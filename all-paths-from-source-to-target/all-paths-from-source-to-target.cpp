class Solution {
    vector<int> temp;
    void dfs(vector<vector<int>>& graph, vector<vector<int>>& res,int current, int &target){
        temp.push_back(current);
        
        if(current == target){
            res.push_back(temp);
        }else{
            for(auto x: graph[current]){
                dfs(graph, res, x, target);
            }
        }
        temp.pop_back();
    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> res;
        int target = graph.size()-1;
        dfs(graph, res,0, target);
        return res;
    }
};