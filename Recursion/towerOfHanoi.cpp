#include<iostream>
using namespace std;
void towerOfHanoi (int n, char a , char b , char c ){
    if(n== 1){
        cout << "from " <<  a << " to " << c << endl;
        return;
    }
    towerOfHanoi( n-1 , a , c, b);
    cout << " from " << a << " to " << c << endl;
    towerOfHanoi ( n-1, b, a, c );

}
int main(){
    int num; 
    cin >> num ; 
    char a,b,c; 
    cin >> a >> b >> c;
    towerOfHanoi (num , a , b, c);
    return 0;


}