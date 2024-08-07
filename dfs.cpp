 void dfs(vector<int> adj[] , vector<int> &list , int node , int vis[]){
      vis[node]=1;
      list.push_back(node);
      
      // traverse
      for(auto it : adj[node]){
          if(!vis[it]){
              dfs(adj,list,it , vis);
          }
      }
      
  }