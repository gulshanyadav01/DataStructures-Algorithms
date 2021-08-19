/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 19-Aug-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

static int dp[101][1001]; 

int knapsack( int wt[], int val[], int w, int num){

    if(num == 0 || w == 0){
        return 0; 
    }

    if(dp[num][w] != -1){

        return dp[num][w]; 
    }

    if(wt[num-1] <= w){
        return dp[num][w] = max(val[num-1] + knapsack(wt, val, w - wt[num-1], num-1), knapsack(wt, val, w, num-1)); 
    }
    else if (wt[num-1] > w){
        return dp[num][w] = knapsack(wt, val, w, num-1); 
    }
}

// int knapsack2(int wt[], int val, int w, int n){

//     for(int i = 0; i< n + 1; i++){
//         for(int j = 0; i< w+1; j++){
//             if(i ==0 || j == 0){
//                 dp[i][j] = 0; 
//             }
//         }
//     }

//     // 
//     for(int i = 1; i< n+1; i++){
//         for(int j = 1; j< w+1; j++){

//             if(wt[i-1] <= w ){

//                 dp[i][j]  = max(val[i-1] + dp[i])
//             }
//         }
//     }
// }


int main(){
    memset(dp, -1, sizeof(dp)); 
     cout << "enter the value of n and w ";
    int num, w; 
    cin >> num >> w; 
   
   int wt[num]; 
   int val[num]; 
   cout << "enter the weigth"<<endl;
   for(int i = 0; i< num; i++){
       cin >> wt[i];
   }

    cout << "enter the value " << endl;
   for(int i = 0; i< num; i++){
       cin >> val[i]; 
   }

    cout << knapsack(wt, val, w, num); 

    return 0;
}