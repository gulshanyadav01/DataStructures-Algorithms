/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 05-Aug-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool DfsRec(vector<int> adj[], int s, vector<bool> visited, vector<bool> recst){
    visited[s] = true; 
    recst[s] = true; 

    for(int u: adj[s]){
        if(visited[u] == false){
            if(DfsRec(adj, u, visited, recst) == true){
                return true; 
            } 
        }
        else if (recst[u] == true){
            return true; 
        }
    }
    recst[s] = false; 
    return false; 
}

bool isCycle(vector<int> adj[], int v){
    vector<bool> visited(v, false); 
    vector<bool> recst(v, false); 

    for(int i = 0; i< v; i++){
        if(DfsRec(adj, i, visited, recst )== true){
            return true; 
        }
    }
    return false; 
}

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v); 
}

int main(){
    int v; 
    cin >> v;
    vector<int> adj[v]; 

    addEdge(adj, 0, 1); 
    addEdge(adj, 1, 2); 
    addEdge(adj, 2, 3); 
    addEdge(adj, 3, 1); 
    cout << isCycle(adj, v); 
    return 0; 
}