#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "abc";
    for(int i =0;i<s.length();i++){
        for(int j=1;i+j<=s.length();j++){
            cout<<s.substr(i,j)<<endl;
        }
    }
}
