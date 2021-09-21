#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x=0;
        cin>>n;
        if(n%5 == 0){
            while(n%10 != 0){
                n = n*2;
                x++;
            }
            cout<<x<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
}