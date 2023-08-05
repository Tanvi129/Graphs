#include <iostream>
using namespace std;
// Input graph using adjacency matrix
// Graph - 
// n - nodes
// m - lines/edges

int main(){
    int n,m;
    // input no of nodes n amd no of lines m
    cin>> n >> m;
    // Adjacency matrix declaration for one based indexing. Remove +1 for 0 base indexing
    int adj[n+1][m+1];
    for(int i = 0; i < m ; i++){
        int u,v;
        cin>> u >> v;
        // setting both as one for undirected graph
        adj[u][v] = 1;
        adj[u][v] = 1;
    }
    return 0;
}