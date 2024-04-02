class Solution {
    public int countComponents(int n, int[][] edges) {
        boolean[] vis = new boolean[n];
        List<List<Integer>> adjList = new ArrayList<>();
        for(int i = 0; i < n; i++){
            adjList.add(new ArrayList<>());
        }
        
        for(int[] edge: edges){
            int u = edge[0];
            int v = edge[1];
            
            adjList.get(u).add(v);
            adjList.get(v).add(u);
        }
        
        int count = 0;
        for(int i = 0; i<n; i++){
            if(!vis[i]){
                dfs(i, adjList, vis);
                count++;
            }
        }
        return count;
    }
    public void dfs(int index, List<List<Integer>> adjList, boolean[] vis){
        vis[index] = true;
        for(int neighbor : adjList.get(index)){
            if(!vis[neighbor]){
                dfs(neighbor, adjList, vis);
            }
        }
    }
}