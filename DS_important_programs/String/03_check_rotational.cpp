#include<iostream>
using namespace std;
void check_rotational(string str1,string str2){
    string temp = str1 + str1;  // for rotational possibilities
    // Now we will check that str2 is a substring of temp or not-->
    if(temp.find(str2) != string::npos){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
int main(){
    string a = "abcd";
    string b = "bcda";
    check_rotational(a,b);
}