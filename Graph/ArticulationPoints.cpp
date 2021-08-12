 /*
author:gulshan yadav
email: gulshany01@gmail.com
date: 12-Aug-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v); 
    adj[v].push_back(u); 
}

void DFS(int u, vector<int> &low, vector<int> &disc, vector<int> &parent, vector<bool>& articulation, vector<int>adj[]){

    int children = 0; 
    static int time = 0; 
    low[u] = disc[u] = time;
    time += 1; 

    for(int v: adj[u])
        if(disc[v] == -1) {
            children += 1;
            parent[v] = u; 
            DFS(v, low, disc,parent,  articulation, adj); 
            low[u] = min(low[u], low[v]);

            // case 1: 
            if(parent[u] == -1 && children > 1){
                articulation[u] = true; 
            }

            // case 2: 
            if(parent[u] != -1 && low[v] >= disc[u]){
                articulation[u] = true; 
            }

        }
        // ignore child to parent edge
        else if (v!= parent[u]){
            low[u] = min(low[u], disc[v]); 
        }



}

void ArticulationPoint(vector<int> adj[], int v){

    vector<int> low(v, -1), disc(v, -1), parent(v, -1); 
    vector<bool> articulation(v, false); 

    for(int i = 0; i<v; i++)
        if(disc[i] == -1)
            DFS(i, low, disc, parent, articulation, adj);
    
    // print the articulation point 

    for(int i = 0; i< v; i++){
        if(articulation[i] == true){
            cout << i << " "; 
        }
    }
}

int main(){

    int v; 
    cin >> v; 

    vector<int> adj[v]; 

    addEdge(adj, 0, 1); 
    addEdge(adj, 0, 2); 
    addEdge(adj, 1, 2); 
    addEdge(adj, 2, 3); 
    addEdge(adj, 3, 4); 
    ArticulationPoint(adj, v); 

}