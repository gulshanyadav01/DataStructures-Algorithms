#include<iostream>
using namespace std; 

class person{
    public: 
    int age;

    person(int age){
        this-> age = age; 
    }

}; 

int main(){
    person *p1 = new person(10);
    cout << p1->age;  
    return 0; 
    
}