/* 
author: gulshan yadav
date: 03-june-2021
email: gulshany01@gmail.com
*/
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define d 256

void rabinKarpSearch(string &txt, string &pat, int q){
    int n = txt.length(); 
    int m = pat.length(); 
    int h =1; 
    // calculate the d^(m-1); 
    for(int i =0; i<= m-1; i++){
        h = (h*d) % q; 
    }

    // calculate the value of pat and txt; 
    int p = 0, t = 0; 
    for(int i = 0; i<m; i++){
        p = (p*d + pat[i]) %q; 
        t = (t*d + txt[i]) %q; 
    }
    // check the spurio hit
    for(int i = 0; i<= n-m; i++){
        if(p== t){
            bool flag = true; 
            for(int j = 0; j< m; j++){
                if(pat[j]!= txt[i+j])
                    flag = false; 
                    break; 
            }
            if(flag){
                cout << i<< " ";
            }
        }
        if(i< n-m){
            t = ((d*( t - (txt[i]*h))) - txt[i+m]) %q; 
            if(t<0){
                t = t+q; 
            }
        }
    }

}

int main(){
    string txt; 
    cin >> txt; 
    string pat; 
    cin >> pat; 
    rabinKarpSearch(txt, pat, 101); 
    
}