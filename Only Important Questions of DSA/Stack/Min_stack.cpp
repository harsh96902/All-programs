#include<iostream>
#include<stack>
using namespace std;
class MinStack {
    stack<int>stk;
    stack<int>min_stk;

    // In this  problem we will use two stack -->
    // One will be the main stack and second will manage the minimun number at top
    
    
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(min_stk.empty() || val <= min_stk.top()){
            min_stk.push(val);
        }
        stk.push(val);
    }
    
    void pop() {
        if(stk.top() == min_stk.top()){
            min_stk.pop();
        }
        stk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return min_stk.top();
    }
};
int main(){
    MinStack min;
    min.push(4);
    min.push(3);
    min.push(1);
    min.pop();
    min.push(9);
    cout<<min.getMin();

}