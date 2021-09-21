#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "hkjshdghdk";
    string sub_s = "hd";
    // 1. Slicing in stirng using substr--->
    cout<< s.substr(3,2);   // it means 2 elements after 3 index;
    
    // 2. check the substring of a string--->
    if(s.find(sub_s) != string::npos){ //npos is constant static value with the highest possible value for an element of type size_t and it is defined with -1.
        cout<<endl<<"yes it is a substring of s";
    }
    else{
        cout<<endl<<"no";
    }
    // 3.find the index of a substring--->
    int x =5;
    int index = s.find(sub_s,x);   // here x is used for, so that we can check the index of substring after any particular index;
    cout<<endl<<"index = "<<index;
    //4. How to get the index of any character --->
    int ind = 's' -'a';
    cout<<endl<<ind;
}