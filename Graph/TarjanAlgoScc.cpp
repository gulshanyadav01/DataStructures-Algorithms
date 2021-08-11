/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 11-Aug-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Dfs(int u, vector<int> &disc, vector<int> &low, vector<bool> &presentStack, stack<int> &myStack, vector<int> adj[]){

    static int time = 0; 
    disc[u] = low[u] = time; 
    time += 1;
    myStack.push(u); 
    presentStack[u] = true; 

    for(int v: adj[u]){
        // v is not visited; 
        if(disc[v] == -1){
            Dfs(v, disc, low, presentStack, myStack, adj); 
            low[u] = min(low[u], low[v]);
        }

        else if(presentStack[v]){
            low[u] = min(low[u], disc[v]); 
        }
    }
    // head edge 
    if(low[u] == disc[u]){
        while(myStack.top() != u){

            cout << myStack.top() <<" "; 
            presentStack[myStack.top()] = false; 
            myStack.pop(); 

        }
        cout << myStack.top() <<"\n"; 
        presentStack[myStack.top()] = false; 
        myStack.pop(); 
    }

}

void tarjanAlgo(vector<int> adj[], int v ){

    vector<int> disc(v, -1), low(v, -1);
    vector<bool> presentStack(v, false); 
    stack<int> myStack;

    for(int i = 0; i< v; i++){
        if(disc[i] == -1){
            Dfs(i, disc, low, presentStack, myStack, adj); 
        }
    }


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
    addEdge(adj, 3, 0); 
    addEdge(adj, 3, 4); 
    addEdge(adj, 4, 5);
    addEdge(adj, 5, 4); 

    tarjanAlgo(adj, v); 

}