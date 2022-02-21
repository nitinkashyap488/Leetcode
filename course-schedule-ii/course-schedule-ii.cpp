class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
       
        vector<int>adj[numCourses];
        queue<int>q;
        vector<int>indegree(numCourses,0);
        
         for(int i =0; i< prerequisites.size(); i++ ){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        for(int i =0; i < prerequisites.size(); i++){
            indegree[prerequisites[i][0]]++;
            
        }
        for(int i =0; i< indegree.size(); i++){
            if(indegree[i] == 0)q.push(i);
        }
        vector<int>result;
        
        while(!q.empty()){
           int v = q.front();
            q.pop();
            for(auto it : adj[v]){
                indegree[it]--;
                 if(indegree[it] == 0)q.push(it);
            }
            result.push_back(v);
        }
        if (result.size() != numCourses){
            result.clear();
        }
        return result;
    }
};