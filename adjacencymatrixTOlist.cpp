vector<int>adj[n];
        for(int i=0;i<n;i++){
           for(int i=0;i<n;i++){
            if(isConnected[i][j]==1 && i!=j){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
           }
        }