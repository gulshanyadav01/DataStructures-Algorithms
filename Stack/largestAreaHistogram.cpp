/*
author:gulshan yadav
email: gulshany01@gmail.com
date: 25-jun-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// this is naive solution

int maxHistogramArea(int arr[], int num){
    int res = 0; 
    for(int i = 0; i< num; i++){
        int curr = arr[i];
        for(int j = i-1; j>= 0; j--){
            if(arr[j]>= arr[i]) curr+= arr[i];
            else{
                break;
            }
        }
        for(int j = i+1; j< num; j++){
            if(arr[j] >= arr[i]) curr += arr[i];
            else{
                break;
            }
        }
        res = max(res, curr);
    }
    return res; 
}

// better solution 

vector<int> prevSmaller(int arr[], int num){
    stack<int> s; 
    vector<int> v; 
    v.push_back(-1);
    s.push(0);
    for(int i = 1; i< num; i++){
        while(s.empty() == false && arr[s.top()] > arr[i]){
            s.pop();
        }
        int ps = s.empty()? -1 : s.top();
        v.push_back(ps);
        s.push(i);
    }
    return v; 
}

vector<int> nextSmaller(int arr[], int num){
    stack<int> s; 
    vector<int> v; 
    v.push_back(num);
    s.push(num-1);
    for(int i = num-2; i>= 0; i--){
        while(s.empty() == false && arr[s.top()] > arr[i]){
            s.pop();
        }
        int ps = s.empty()? num : s.top();
        v.push_back(ps);
        s.push(i);
    }
    reverse(v.begin(), v.end());
    return v;  
}

// efficient solution 

int areaOfHistogram(int arr[], int num){
    int res = 0; 
    stack<int>st;  
    for(int i = 0; i< num; i++){
        while(st.empty() == false && arr[st.top()] >= arr[i] ){
            int tp = st.top(); 
            st.pop(); 
            int curr = arr[tp]*(st.empty() ? i : (i- st.top()-1)); 
            res = max(res, curr);
        }
        st.push(i);
        
    }
    while(st.empty() == false){
            int tp = st.top();
            st.pop(); 
            int curr = arr[tp]*(st.empty() ? num : (num - st.top()-1)); 
            res = max(res, curr);
        }
    return res; 
}


int main(){
    int num; 
    cin >> num; 
    int *arr = new int[num];
    for(int i = 0; i< num; i++){
        cin >> arr[i];
    }
    cout << areaOfHistogram(arr, num); 
    // cout << maxHistogramArea(arr, num);
    // vector<int> k = prevSmaller(arr, num); 
    // vector<int> N = nextSmaller(arr, num);
    // for(int x:k){
    //     cout << x << " ";
    // }
    // cout << endl;
    // for(int x:N){
    //     cout << x << " ";
    // }
    return 0; 
}