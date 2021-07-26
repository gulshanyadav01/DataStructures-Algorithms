/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 26-July-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void shortestPath(vector<int> adj[], int v, int s){
    // create a distance array with infinite value; 
    int dist[v]; 
    bool visited[v]; 
    for(int i =0 ; i< v; i++){
        dist[i] = INT_MIN; 
        visited[i] = false; 
    }
    
    // create a queue
    queue<int> q; 
    q.push(s); 
    // insert source vertex 
    dist[s]  = 0; 
    visited[s] = true; 
    // travese the queue
    while(q.empty() == false){
        int u = q.front(); 
        q.pop(); 
        // travese every vertex of u
        for(int i: adj[u]){
            // if not visited then visit
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