#include<iostream>
using namespace std;

bool isPalindrome(string s, int start, int end ){
    if(start >= end){
        return true;
    }
    return (s[start] == s[end]) && isPalindrome(s, start + 1 , end - 1);


    
}

int main(){
    string input;
    cin >> input ;
    cout<< isPalindrome(input, 0, input.length()-1);
    return 0;

}