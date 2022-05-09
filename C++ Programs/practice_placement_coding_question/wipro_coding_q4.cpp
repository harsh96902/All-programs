#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int num;
    cin>>num;
    s = to_string(num);
    string s1 = " ";
    s1 += s[2];
    string s2 =" ";
    s2 += s[3];
    int num1;
    int num2;
    // cout<<s;
    cout<<stoi(s1) + stoi(s2);
}