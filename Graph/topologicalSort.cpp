/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 03-Aug-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


       

void addEdge(vector<int> adj[], vector<int> ind,  int u, int v){
        
        adj[u].push_back(v);
        ind[v]++; 
        
}


void topologicalSort(vector<int> adj[], int v , vector<int> ind){
        queue<int> q; 
        for(int i = 0; i< v; i++){
            if(ind[i] == 0){
                q.push(i); 
            }
        }
        
        // display the que; 
        while(q.empty() == false){
            int s = q.front(); 
            q.pop(); 
            cout << s <<" ";

            for(int u : adj[s]){

                ind[u]--; 
                if(ind[u] == 0){
                    q.push(u); 
                }
            }
        }

    }

int main(){
    int v; 
    cin >> v; 
    vector<int> adj[v]; 
    vector<int> ind(v, 0); 
    addEdge(adj, ind, 0, 2);
    addEdge(adj, ind, 0, 3); 
    addEdge(adj, ind, 2, 3); 
    addEdge(adj, ind, 1, 3); 
    addEdge(adj, ind, 1, 4);
    topologicalSort(adj, v, ind); 
    return 0; 
}