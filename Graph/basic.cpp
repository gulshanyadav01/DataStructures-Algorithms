/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 03-Aug-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define nline "\n"; 

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v); 
    adj[v].push_back(u);
}

void shortestPath(vector<int> adj[], int v, int s){

    queue<int> q; 
    vector<int> dist(v, INT_MIN); 

    vector<bool> visited(v, false); 
    dist[s] = 0; 
    q.push(s); 
    visited[s] = true; 
    while(q.empty() == false){
        int u = q.front(); 
        q.pop(); 
        
        for(int i : adj[u]){
            if(visited[i] == false){
                dist[i] = dist[u] + 1; 
                visited[i] = true; 
                q.push(i); 
            }
        }
    }

    for(int i = 0; i< dist.size(); i++){
        cout << dist[i] <<" ";
    }

    


}

int main(){
    cout <<  "enter the vertex No." << nline; 
    int v; 
    cin >> v; 

    cout << "enter the source vertex" << nline; 
    int s; 
    cin >>s; 

    vector<int> adj[v]; 

    addEdge(adj, 0, 1);  
    addEdge(adj, 0, 2); 
    addEdge(adj, 1, 2); 
    addEdge(adj, 1, 3); 
    addEdge(adj, 2, 3); 

    shortestPath(adj, v, s);
    return 0;  
}