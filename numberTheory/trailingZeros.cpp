#include<iostream>
using namespace std;
int countTrailingZeros(int num){
    int count =0;
    for(int i = 5; i <= num;  i = i * 5){
        count += num/i;
    }
    return count;
}
int main(){
    int num; 
    cin >> num;
    cout << countTrailingZeros(num);
    return 0;

}