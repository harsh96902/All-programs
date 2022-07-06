#include<bits/stdc++.h>
using namespace std;
class MyStack {
public:
    queue<int>q;
    MyStack() {
        
    }
    
    void push(int x) {
        if(q.empty()){
            q.push(x);
        }
        else{
            
            int s = q.size();
            q.push(x);
            while(s--){
                int top =  q.front(); 
                q.pop();
                q.push(top);
            }
        }
    }
    
    int pop() {
        int top = q.front();
        q.pop();
        return top;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        if(q.empty())return true;
        else return false;
    }
};
int main(){
    MyStack S;
    S.push(4);
    S.push(3);
    S.push(2);
    S.push(2);
    cout<<S.pop();
    cout<<S.top();
    cout<<S.empty();
}