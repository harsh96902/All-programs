#include<iostream>
using namespace std;
int main(){
    int t,a;
    cin>>t;
    while(t--){
        cin>>a;
        if(a>=40){
            if(a%5 == 0){
                cout<<a<<endl;
            }
            else if(a%5 == 3){
                cout<<a<<endl;
            }
            else if(a%5 < 3){
                a = a/5;
                a = a*5;
                cout<<a<<endl;
            }
            else if(a%5 > 3){
                int i =a;
                while(i%5 != 0){
                    i = i + 1;
                }
                cout<<i<<endl;  
            }
        }
        else{
            cout<<a<<endl;
        }
    }
}