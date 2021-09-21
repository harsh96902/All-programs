#include<iostream>
using namespace std;

string countAndsay(int n){
    if(n == 1){
        return "1";
    }                  // these are the base cases
    if(n == 2){
        return "11";
    }
    string s = "11";   // initialize the string s with "11"
    
    // Now we will create all values(count and say ) upto n then we will return the final string
    for(int i = 3;i<=n;i++){
        string t = "";   // temp string
        s = s+"$";   // we are using this so that when we reach at the end of this string check the last element
        int count = 1;
        // Now count and say from the string s and store the values in temp string
        for(int j = 1;j<s.length();j++){
            if(s[j] != s[j-1]){
                t = t + to_string(count);   // to_string() convert count integer into string
                t = t + s[j-1];   // s[j-1] is the element which is counting
                count = 1;
            }
            else{
                count++;
            }
        }
        s = t;
    }
    return s;
}
int main(){
    int a;
    cin>>a;
    cout<<countAndsay(a)<<endl;
}