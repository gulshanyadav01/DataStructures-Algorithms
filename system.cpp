#include<iostream>
#include<string>
// #include<system>
using namespace std; 
int main(){
    string s;
    cin >>s;  
    cout << "enter the string to open channel \n";
    getline(cin, s); 
    if(s == "y"){
        system("start https://www.youtube.com/");
    }
    
    return 0;
    return 0;
}