#include<bits/stdc++.h>
#include<vector>
#include<stack>
using namespace std;
class Solution{
    public:
    int trap(vector<int> &height){
        stack<int>stk1;
        stack<int>stk2;
        int mini = height[0];
        for(int i =0;i<height.size();i++){
            mini = max(mini , height[i]);
            stk1.push(mini);
        }
        int n  = height.size();
        int mini2 = height[n-1];
        for(int i =height.size() - 1;i>=0;i--){
            mini2 = max(mini2 , height[i]);
            stk2.push(mini2);
        }
        stack<int>temp;
        while(!stk1.empty()){
            temp.push(stk1.top());
            stk1.pop();
        }
        // int fmin = INT_MAX;
        int x = 0;
        int result = 0;
        while(!stk2.empty() && !temp.empty()){
            cout<<"stack 2 : "<<stk2.top()<<" stack 1 : "<<temp.top();
            cout<<"\n";
            result += min(stk2.top(), temp.top()) - height[x];
            x++;
            stk2.pop();
            temp.pop();
        }
        return result;
    }
};
int main(){
    vector<int>vec;
    vec.push_back(1);
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(3);
    vec.push_back(1);
    vec.push_back(5);
    Solution s;
    cout<<s.trap(vec);
}