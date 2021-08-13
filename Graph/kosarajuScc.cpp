/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 9-August-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
}

// ----------------------------------- main function of dfs------------------

void dfsRec(vector<int> adj[], int s, stack<int> &st, vector<bool> &visited){
    visited[s] = true; 

    for(int u: adj[s]){ 
        if(visited[u] == false){
            dfsRec(adj, u, st, visited);
        }
    }

    st.push(s);
}

void dfs(vector<int> adj[], int v, stack<int> &st){
    vector<bool> visited(v, false); 

    for(int i = 0; i< v; i++){
        if(visited[i] == false){
            dfsRec(adj, i, st, visited);
        }
    }

  
} 

// ----------------------------------------------------- Tranpose of graph ------------------------------------

void transposeOfGraph(vector<int> adj[], vector<int> transpose[],  int v){
    for(int i  = 0; i< v; i++){
        for(int u = 0; u < adj[i].size(); u++){
            addEdge(transpose, adj[i][u], i); 
        }
    }
}


// ------------- MAIN DFS for find the strongly connected components ------------------

void dfsUtil(vector<int> transpose[], int s, vector<bool> &visited){
    visited[s] = true; 
    cout << s << " "; 
    for(int i : transpose[s]){
        if(visited[i] == false){
            dfsUtil(transpose, i, visited); 
        }
    }
}




void stronglyConnectedComp(vector<int> transpose[], int v, stack<int> &st){

    vector<bool> visited(v, false); 

    while(st.empty() == false){
        int  u = st.top(); 
        st.pop();

        if(visited[u] == false){
            dfsUtil(transpose, u, visited);
            cout << endl;
        }
    }
}





int main(){
    int v; 
    cin >> v; 
    vector<int> adj[v];
    vector<int> transpose[v]; 
    stack<int> st; 
    addEdge(adj, 0, 1); 
    addEdge(adj, 1, 2); 
    addEdge(adj, 2, 3); 
    addEdge(adj, 3, 0); 
    addEdge(adj, 3, 4);
    addEdge(adj, 4, 5); 
    addEdge(adj, 5, 4); 
    dfs(adj, v, st); 
    transposeOfGraph(adj, transpose, v); 
    stronglyConnectedComp(transpose, v, st); 
    return 0; 
}