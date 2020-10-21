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



    void insert(int key ){
        int i = key% bucket;
        table[i].push_back(key);
    }


    bool search(int key) {
        int i = key % bucket; 
        for(auto x: table[i]){
            if(x == key ){
                return true;
            }
        }
        return false;
    }


    void remove(int key){
        int i = key % bucket; 
        table[i].remove(key);

    }

};

int main(){
    cout << "enter the no. of key "<< endl;
    int key; 
    cin >> key; 

    myHash hey(key);
    hey.insert(10);
    cout << hey.search(10)<< "\n";
    hey.remove(10);
    cout << hey.search(10)<< "\n";
    return 0;
}

