/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 6-August-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> dijkstra(vector<vector<int>> graph, int s, int V){

    vector<int> dist(V, INT_MAX); 
    vector<bool> fin(V, false); 

    dist[s] = 0; 

    for(int count = 0; count < V; count++){

        int u = -1; 

        for(int i = 0; i< V; i++){
            if(fin[i] == false && (u == -1 || dist[i]< dist[u])){
                u = i; 
            }

        }
        fin[u] = true; 

        // relax the vertex = 

        for(int v = 0; v< V; v++){
            if(graph[u][v] != 0 && fin[v] == false){
                dist[v] = min(dist[v], dist[u] + graph[u][v]);
            }
        }
    }
    return dist; 
    
}

// void addEdge(vector<int> adj[], int u, int v){
//     adj[u].push_back(v);
// }

int main(){
    int V; 
    cin >> V; 
    vector<vector<int>> graph = {
        {0, 5, 10, 0},
        {5, 0, 3, 20}, 
        {10, 3, 0, 2},
        {0, 20, 2, 0}
    }; 

    vector<int> k =  dijkstra(graph, 0, V); 

    for(int x : k){
        cout <<  x <<" ";
    }
    return 0; 
}