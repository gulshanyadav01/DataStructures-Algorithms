/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 26-July-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void DfsRec(vector<int> adj[], int s, bool visited[]){
    visited[s] = true; 
    cout << s << " "; 
    for(int x: adj[s]){
        if(visited[x] == false){
            DfsRec(adj, x, visited); 
        }
    }
}

void DFS(vector<int> adj[], int v){

    bool visited[v]; 
    for(int i = 0; i< v; i++){
        visited[i]  = false; 
    }
    DfsRec(adj, 0, visited); 


}

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u); 
}
// ------------------------ same for disconnected graph with some modification --------------

int main(){
    int v  = 5; 
    vector<int> adj[v]; 
    addEdge(adj, 0, 1); 
    addEdge(adj, 0, 2); 
    addEdge(adj, 1, 3); 
    addEdge(adj, 1, 4); 
    addEdge(adj, 3, 4); 
    DFS(adj, v);
    return 0; 
}
