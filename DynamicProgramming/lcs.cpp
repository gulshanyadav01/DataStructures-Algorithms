/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 24-Aug-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int lcs(string s1, string s2, int m, int n){

    if(m== 0 || n ==0){
        return 0; 
    }

    if(s1[m-1] == s2[n-1]){
        return 1+lcs(s1, s2, m-1, n-1);
    }
    else{
        return max(lcs(s1, s2, m-1, n), lcs(s1, s2, m, n-1));
    }
}

// dp based solution 

int lcsdp(string s1, string s2, int m, int n){
    
    int dp[m+1][n+1]; 

    for(int i = 0; i<= m; i++){
        dp[i][0] = 0; 
    }
    for(int j = 0; j<= n; j++){
        dp[0][j] = 0; 
    }

    for(int i = 1; i<= m; i++){
        for(int j = 1; j<= n; j++){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = 1+ dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]); 
            }
        }
    }
    return dp[m][n]; 
}

int main(){
    string s1, s2; 
    cin >> s1; 
    cin >> s2; 

    cout << lcs(s1, s2, s1.length(), s2.length()); 

    cout << endl;
    
    cout << lcsdp(s1, s2, s1.length(), s2.length()); 

    return 0; 
}