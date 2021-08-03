/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 03-Aug-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<int> adj[], int u, int v, vector<int> &ind){
    adj[u].push_back(v); 
    ind[v]++; 
}

bool isCycle(vector<int> adj[], vector<int> ind, int v){
    queue<int> q; 
    for(int i = 0; i< v; i++){
        if(ind[i] == 0){
            q.push(i); 
        }
    }

    int count = 0; 
    while(q.empty() == false){
        int u = q.front(); 
        q.pop();
        
        for(int i : adj[u]){
            ind[i]--; 
            if(ind[i] == 0){
                q.push(i); 
            }
        }
        count++; 
    }
    return (count != v); 
}

int main(){
    int v; 
    cin >> v; 

    vector<int> adj[v]; 
    vector<int> ind(v, 0); 

    addEdge(adj, 0, 1, ind); 
    addEdge(adj, 1, 2, ind); 
    addEdge(adj, 2, 3, ind); 
    // addEdge(adj, 0, 2, ind); 
    // addEdge(adj, 3, 1, ind); 
    addEdge(adj, 4, 1, ind);
    
    cout << isCycle(adj, ind, v);
    return 0; 

}