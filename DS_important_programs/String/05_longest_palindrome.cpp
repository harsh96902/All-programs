#include<iostream>
#include<string>
using namespace std;
bool check_palindrome(string s){
    int m = 0,n = s.length() -1;
    int flag =0;
    while(n != 0){
        if(s[m] != s[n]){
            flag = 1;
            return false;
        }
        m++;
        n--;
    }
    if(flag == 0){
        return true;
    }
}
string longest_palindrome(string str){
    int size = str.length() - 1;
    // cout<<"size = "<<size<<endl;
    int c = size;  // it will update the no. of pair of string which we will pass
    bool x = false;  // initialise x with false
    int a = 0;      // We will pass the value  of a and b as arguments
    int b = size;
    // Here we are updating the values of a and d in descending order to get 
    // the longest palindrome, if x will be true return 
    while(x != true){
        // cout<<"a = "<<a<<" b = "<<b<<endl;
        // cout<<str.substr(a,b+1)<<" a = "<<a<<" b = "<<b<<endl;
        x = check_palindrome(str.substr(a,b+1));
        if(x == true){
            return str.substr(a,b+1);
        }
        if(a+b == size){   // here b will reach at the last element, so we will reset a=0 and update the value with c
            a = 0;
            c--;
            // cout<<"c = "<<c<<endl;
            b = c;
            if(c == 0){
                return str.substr(0,1);
            }
        }
        else{
            a++;
        }
    // int x = str.length();
    // if(check_palindrome(str) == true){
    //     return str.substr(0,x);
    // }
    // else{
    //     return "no";
    // }
    }
}
int main(){
    string str = "aba";
    cout<<longest_palindrome(str);
}