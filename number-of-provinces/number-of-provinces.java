class Solution {
    public int findCircleNum(int[][] isConnected) {
        int n = isConnected.length;
        List<List<Integer>> adjList = new ArrayList<>();
        boolean[] vis = new boolean[n];
        for(int i =0; i< n; i++){
            adjList.add(new ArrayList<>());
        }
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(isConnected[i][j] == 1) {
                    adjList.get(i).add(j);
                }
            }
        }
        
        int count = 0;
        for(int i =0; i< n; i++){
            if(!vis[i]){
                dfs(i, adjList, vis);
                count++;
            }
        }
        return count;
    }
    public void dfs(int node, List<List<Integer>> adjList, boolean[] vis){
        vis[node] = true;
        for(int neighbor : adjList.get(node)){
            if(!vis[neighbor]){
                dfs(neighbor, adjList, vis);
            }
        }
    }
}