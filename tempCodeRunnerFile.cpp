#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector <int> bfsOfGraph(int n, vector<int> adj[]){
    int visited[n] = {0};
    visited[0] = 1;
    queue<int> q;
    q.push(0);
    vector<int> bfs;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for (auto it: adj[node]){
            if(!visited[it]){
                visited[it]=1;
                q.push(it);
            }
        }
    }
    return bfs;
}

int main(){
    int n,m;
    cin>> n >> m;
    // adjacencylist
    vector <int> adj[n];
    for(int i=0 ; i < m ; i ++ ){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        // adj[v].push_back(u);
    }
    vector<int> result = bfsOfGraph(n,adj);
    for(int i = 0; i < result.size() ; i++){
        cout<<result[i]<<" ";
    }
    return 0;
}