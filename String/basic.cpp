/*
Author: "gulshan yadav"
Date: 24-oct-2020
*/
#include<iostream>
using namespace std;
int main(){
    char x= 'a';
    cout << (int)x<< endl;

    string s= "geeksforgeeks";
    int arr[26] = {0};
    // this is used for count 
    for(int i = 0; i<26; i++){
        arr[s[i]-'a']++;
    }

    for(int i =0; i< 26; i++){
        if(arr[i]>0) cout << (char)(i+'a')<<" "<< arr[i]<< "\n";
        
    }
    return 0;

    
    return 0;

}