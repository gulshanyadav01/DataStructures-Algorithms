/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 26-July-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void shortestPath(vector<int> adj[], int v, int s){
    int dist[v]; 
    bool visited[v]; 
    for(int i =0 ; i< v; i++){
        dist[i] = INT_MIN; 
        visited[i] = false; 
    }
    queue<int> q; 
    q.push(s); 
    dist[s]  = 0; 
    visited[s] = true; 
    while(q.empty() == false){
        int u = q.front(); 
        q.pop(); 
        for(int i: adj[u]){
            if(visited[i] == false){
                dist[i] = dist[u] + 1;
                visited[i] = true; 
                q.push(i); 
            }
            
        }
    }
    
    // print the dist array
    for(int i = 0; i < v; i++)
        cout << dist[i] << " ";  
    
}


void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u); 
}

int main(){
    int v  = 4; 
    vector<int> adj[4]; 

    addEdge(adj, 0, 1); 
    addEdge(adj, 0, 2); 
    addEdge(adj, 1, 2); 
    addEdge(adj, 1, 3); 
    addEdge(adj, 2, 3); 
    shortestPath(adj, v, 0); 
    return 0; 
    
}