#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int a[t][t],d1=0,d2=0;
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            cin>>a[i][j];        
        }
    }
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            if(i==j){
                d1 = d1 + a[i][j];
            }
        }
    }
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int j=t-1;
    for(int i=0;i<t;i++){
        d2 = d2 + a[i][j];
        j = j-1;
    }
    if(d1>d2){
        cout<<d1-d2;
    }
    else if(d2>d1){
        cout<<d2-d1;
    }
    else if(d1 == d2){
        cout<<"0";
    }        
}
