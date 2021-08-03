/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 03-Aug-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool DfsRec(vector<int> adj[], int s, bool visited[], int parent){
    visited[s] = true; 
    
    for(int i: adj[s]){
        if(visited[i] == false){
            if(DfsRec(adj, i, visited, s) == true){
                return true; 
            }
        }
        else if (i != parent){
            return true; 
        }
    }
    return false; 
}

bool isCycle(vector<int> adj[], int v){
    bool visited[v]; 
    for(int i = 0; i< v; i++){
        visited[i] = false;
    }

    for(int i = 0;i < v; i++){
        if(visited[i] == false){
            if(DfsRec(adj, i, visited, -1) == true){
                return true ;
            }
        }
    }
    return false; 
}


void addEdge(vector<int> adj[], int v, int u){
    adj[u].push_back(v); 
    adj[v].push_back(u); 
}

int main(){
    int v = 6; 
    // cin >> v; 
    vector<int> adj[6]; 

    addEdge(adj, 0, 1); 
    addEdge(adj, 1, 2); 
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 4); 
    addEdge(adj, 4, 5); 
    addEdge(adj, 3, 2); 
    cout << isCycle(adj, v); 
}