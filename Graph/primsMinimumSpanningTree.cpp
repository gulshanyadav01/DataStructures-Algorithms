#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

int primsMst(vector<vector<int>> graph, int v){
    int res = 0; 
    vector<int> key(v, INT_MAX);
    key[0] = 0; 
    vector<bool> mset(v, false);

    for(int count = 0; count< v; count++){

        int u = -1; 
        for(int i = 0; i< v; i++){
            if(!mset[i] && (u == -1 || key[i]< key[u])){
                u = i;
            }
        }
        
        mset[u] = true; 
        res = res + key[u]; 

        for(int i = 0; i< v; i++){
            if(graph[u][i] != 0 && !mset[i]){
                key[i] = min(key[i], graph[u][i]); 
            }
        }
    }
    return res; 
}


int main(){

    int v; 
    cin >> v; 
    vector<vector<int>> graph =
    {{0, 5, 8, 0},
    {5, 0, 10, 15},
    {8, 10, 0, 20},
    {0, 15, 20, 0}}; 

    cout << primsMst(graph, v); 
    
    
    return 0; 
}