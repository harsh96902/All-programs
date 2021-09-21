#include<iostream>
#include<string>
using namespace std;

int main(){
    int aa;
    string x ,b,a,c;
    cin>>x;
    a = x.substr(0,2);
    b = x.substr(8,10);
    c = x.substr(2,6);
    aa = stoi(a);
    // cout<<a;
    // cout<<c;

    if(b == "PM"){
        if(aa == 12){
            cout<<aa<<c;
        }
        else{
            aa = aa + 12;
            cout<<aa<<c;
        }
    }
    else if(b == "AM" && aa == 12){
        aa = aa - 12;
        cout<<0<<aa<<c;
    }
    else{
        if(aa < 10){
            cout<<0<<aa<<c;
        }
        else{
            cout<<aa<<c;
        }
    }
        
}