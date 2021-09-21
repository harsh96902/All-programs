#include<iostream>
using namespace std;
int main(){
    int sump1=0,sump2=0,t , n,p1,p2;
    cin>>t;
    while(t--){
        cin>>p1>>p2;
        sump1 = sump1 + p1;
        sump2 = sump2 + p2;
    }
    if(sump1>sump2){
        cout<<"1 "<<sump1-sump2;
    }
    else if(sump2>sump1){
        cout<<"2 "<<sump2-sump1;
    }
}