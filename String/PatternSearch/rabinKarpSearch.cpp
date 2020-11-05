/*
Author: "gulshan yadav"
Date: 05-Nov-2020
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define d 256

void rabinKarpSearch(string text, string pat,int q){ 
    int m = pat.length(); 
    int n = text.length(); 
    cout << m << n; 
    
    int h = 1; 
    for(int i = 1; i<= m-1; i++){
        h = (h*d) % q; 
    }

    int p= 0, t= 0; 
    for(int i = 0; i< m; i++){
        p = (p*d + pat[i]) % q ; 
        t = (t*d + text[i]) % q; 
    }

    for(int i = 0; i<= n-m; i++){

        if(p == t){
            bool flag = true; 
            cout << "hello"; 
            for(int j= 0; j< m; j++){
                if(text[i+j] != pat[j]) {
                    flag = false; 
                    break;
                }
                
            }
            if(flag) cout << i<< " "; 
            if(i< n-m){ 
                t = (d*(t - (text[i] * h)) + text[i+m]) %q; 
            }
            if (t<0) t = t + q; 

        }
    }

}

int main(){
    cout << "enter the text string"<<"\n";
    string text; 
    cin >> text; 
    cout << "enter the pattern string"<< "\n";
    string pat; 
    cin >> pat;
    // naiveSearch(text, pat);
    rabinKarpSearch(text, pat, 101);

    return 0;
    
}