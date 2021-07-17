#include<iostream>
#include<queue>
#include<stack>
using namespace std; 

void reverse(){
    queue<int> q; 
    q.push(10);
    q.push(20);
    q.push(30);
    stack<int> st; 
    while(q.empty() == false){
        st.push(q.front());
        q.pop();
    }
    while (st.empty() == false)
    {
        /* code */
        q.push(st.top());
        st.pop();
    }

    // print the queue

    while(q.empty() == false){
        cout << q.front()<<" ";
        q.pop();
    }

    
}

int main(){
    reverse();
    return 0; 

}

