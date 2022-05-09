#include<iostream>
using namespace std;

// class stack{
//     public:
//     int size;
//     int top;
// };
// int top = -1;
int push(int top ,int stk[],int val,int capacity){
    if(top == capacity - 1){
        cout<<"Stack is full";
        return 0;
    }
    else{
        top++;
        stk[top] = val;

    }
    return top;
}
int main(){
    int top = -1;
    int size = 0;
    int capacity = 10;
    int stk[10];
    top = push(top,stk,3,capacity);
    top = push(top,stk,4,capacity);
    top = push(top,stk,33,capacity);
    top = push(top,stk,32,capacity);
    cout<<top;

}