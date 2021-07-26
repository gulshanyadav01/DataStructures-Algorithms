/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 26-July-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;




void BFS(vector<int> adj[], int v, int s){
  bool  visited[v+1] ; 
  for(int i = 0; i< v; i++){
      visited[i] = false; 
  }
  queue <int> q; 
  q.push(s);
  visited[s] = true; 
  while(q.empty() == false){
      int u = q.front(); 
      q.pop(); 
      
      cout << u << " "; 
      for(int i: adj[u]){
          if(visited[i] == false){
              visited[i] = true; 
              q.push(i);
          }
      }
  }

}

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v); 
    adj[v].push_back(u);
}



void print(vector<int> adj[], int v){
    for(int i = 0; i< v; i++){
        for(int  x: adj[i]){
            cout << x<<" ";
        }
        cout << endl;
    }
}

int main(){
    int v = 5; 
    vector<int> adj[v];
    addEdge(adj, 0 , 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 2);
    addEdge(adj, 3, 4);
    addEdge(adj, 3, 2);
    addEdge(adj, 2, 4); 
    BFS(adj, v, 0);  
    return 0; 
}