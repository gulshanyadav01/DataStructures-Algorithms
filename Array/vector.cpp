#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    vector <int> v1;
    v.push_back( 10 );
    v.push_back( 20 );
    v.push_back( 30 );
    
    int sum = 0; 
    for (int i = 0; i < v.size(); i++){
        sum += v[i];
    }
    v1= v;
    cout << v1.size() << endl;
    cout << sum << endl;
    
    return 0;


}