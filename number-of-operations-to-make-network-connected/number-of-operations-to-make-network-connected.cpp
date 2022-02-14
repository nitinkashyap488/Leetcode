class Solution {
public:
    void bfs(vector<vector<int>>&adj,int i,vector<bool>&visited){
        queue<int>q;
        q.push(i);
        visited[i]=true;
        while(!q.empty()){
            int x=q.front();
            q.pop();
            for(int i=0;i<adj[x].size();i++){
                if(visited[adj[x][i]] == false){
                    q.push(adj[x][i]);
                    visited[adj[x][i]]=true;
                }
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>&connections) {
        int m=connections.size();
        
        
        if(m < n-1) return -1;
		
        vector<vector<int>>adj(n);
        for(int i=0;i<m;i++){
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
        }
        
        vector<bool>visited(n,false);
        int count=0;
        for(int i=0;i<n;i++){
            if(visited[i] == false){
                count++;
                bfs(adj,i,visited);
            }
        }
        return count-1;
    }
};