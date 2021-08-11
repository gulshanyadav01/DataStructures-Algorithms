/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 11-Aug-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bellmanFord(vector<vector<int>> graph, int v){
    vector<int> dist(v, INT_MAX); 
    dist[0] = 0; 
    for(int count  = 0; count< v-1; count++){
        for(int u = 0; u< v; u++){
            dist[u] = min(dist[u] + graph[u][count], dist[u]); 
        }
    }

    // print the distance 

    for(int i = 0; i< v; i++){
        cout << dist[i] <<" "; 
    }
}

int main(){
    int v; 
    cin >> v; 
    vector<vector<int>> graph = {
        {0, 1, 4, 0},
        {0, 0, -3, 2},
        {0, 0, 0, 3},
        {0, 0, 0, 0}
    }; 

    bellmanFord(graph, v);
    return 0; 
}