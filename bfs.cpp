 vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int vis[V]={0};
        vis[0]=1;
        queue<int>qt;
        qt.push(0);
        vector<int>bfs;
        while(!qt.empty()){
            int node= qt.front();
            qt.pop();
            bfs.push_back(node);
            for(auto it : adj[node]){
                if(!vis[it]){
                    qt.push(it);
                    vis[it]=1;
                }
            }
        }
        return bfs;
        
    }