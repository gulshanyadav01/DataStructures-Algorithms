/* 
author: *gulshan yadav*
date: 21-oct-2020
*/
#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

class myHash{
    public: 
    int bucket; 
    list<int> *table;
    
    myHash(int b){
        bucket = b;
        table = new list<int> [b];
        
    }



};


