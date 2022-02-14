class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int, vector<int>> graph;
        for(auto x: edges){
            graph[x[0]].push_back(x[1]);
            graph[x[1]].push_back(x[0]);
        }
        vector<bool> visited(n, false);
        queue<int> q;
        q.push(source);
        while(!q.empty()){
            int temp = q.front();
            q.pop();
            if(temp == destination){
                return true;
            }
            for(auto x: graph[temp]){
                if(visited[x] == false){
                    visited[x] = true;
                    q.push(x);
                }
            }
        }
        return false;
    }
};
