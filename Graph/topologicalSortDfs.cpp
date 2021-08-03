/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 03-Aug-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v); 
}

void DfsRec(vector<int> adj[], int u, vector<bool> &visited, stack<int> &st){
    visited[u] = true; 

    for(int i: adj[u]){
        if(visited[i] == false){
            DfsRec(adj, i, visited, st);
        }
    }

    st.push(u); 
    
}

void dfs(vector<int> adj[],  int v, stack<int> &st ){
    vector<bool> visited(v, false);  
    
    for(int i = 0; i< v; i++){
        if(visited[i] == false){
            DfsRec(adj,i, visited,  st); 
        }
    }

    while(st.empty() == false){
         cout << st.top() <<" "; 
         st.pop(); 
    }

}

int main(){
    stack<int> st; 
    int v; 
    cin >> v; 
    vector<int> adj[v];
   
    addEdge(adj, 0, 1); 
    addEdge(adj, 1, 3); 
    addEdge(adj, 3, 4); 
    addEdge(adj, 2, 3); 
    addEdge(adj, 2, 4); 
    dfs(adj, v, st); 

}