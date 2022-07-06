#include<bits/stdc++.h>
using namespace std;
class MyQueue {
public:
    stack<int>stk;
    stack<int>stk2;
    MyQueue() {
        
    }
    
    void push(int x) {
        stk.push(x);
    }
    
    int pop() {
        while(!stk.empty()){
            int top = stk.top();
            stk.pop();
            stk2.push(top);
        }
        int popy = stk2.top();
        stk2.pop();
        while(!stk2.empty()){
            int top = stk2.top();
            stk2.pop();
            stk.push(top);
        }
        return popy;
    }
    
    int peek() {
        while(!stk.empty()){
            int top = stk.top();
            stk.pop();
            stk2.push(top);
        }
        int peeky = stk2.top();
        while(!stk2.empty()){
            int top = stk2.top();
            stk2.pop();
            stk.push(top);
        }
        return peeky;
    }
    
    bool empty() {
         if(stk.empty())return true;
        else return false;
    }
};
int main(){
    MyQueue S;
    S.push(4);
    S.push(3);
    S.push(2);
    S.push(2);
    cout<<S.pop()<<"\n";
    cout<<S.peek()<<"\n";
    cout<<S.empty()<<"\n";
}