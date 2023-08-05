// Adjacency List is a list that stores the list of neighbouring nodes
#include <iostream>
#include <vector>
using namespace std;
// Graph with n nodes and m edges
int main(){
    int n,m;
    cin>> n >> m;
    // adjacencylist
    vector <int> adj[n+1];
    for(int i=0 ; i < m ; i ++ ){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return 0;
}