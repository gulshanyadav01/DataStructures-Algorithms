/* 
author: *gulshan yadav*
date: 14-oct-2020
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;



int main(){

    vector<int> v = {1,2,5,4,3};

    sort(v.begin(), v.end());

    for(int x: v) cout << x << " ";

    return 0;


}