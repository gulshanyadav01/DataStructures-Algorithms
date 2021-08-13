 /*
author:gulshan yadav
email: gulshany01@gmail.com
date: 13-Aug-2021
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool myComp(pair<int, int> a, pair<int, int> b){

    double r1 = (double)a.first/a.second; 
    double r2 = (double)b.first/b.second; 

    return (r1 > r2);  
}

int fractionalKnapsack(vector<pair<int, int>> item, int num, int cap){

    int res = 0; 
    sort(item.begin(), item.end(), myComp); 

    for(int i = 0; i< num; i++){

        if(item[i].second <= cap){
            cap -= item[i].second; 
            res += item[i].first; 
        }
        else{
            res += (item[i].first)*(cap)/item[i].second; 
        }
    }
    return res; 

}

int main(){

    int num; 
    cin >> num; 

    vector<pair<int, int>> item; 

    for(int i = 0; i< num; i++){
        int a, b; 
        cin >> a >> b; 
        item.push_back(make_pair(a,b));
    }

    cout << "enter the capacity"; 
    int cap; 
    cin >> cap; 

    cout << fractionalKnapsack(item, num, cap );

    return 0; 



}