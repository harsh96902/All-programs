#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int t;
    float a = 2.43232234;
    cin>>t;
    int arr[t],neg=0,zero=0,pos=0;
    for(int i=0;i<t;i++){
    cin>>arr[i];
        if(arr[i]<0){
            neg++;
        }
        else if(arr[i]==0){
            zero++;
        }
        else{
            pos++;
        }
    }
    cout<<pos<<neg<<zero<<endl;
    float postratio,negratio,zeroratio;
    postratio = pos/t;
    negratio = neg/t;
    zeroratio = zero/t;
    cout<<setprecision(6);
    cout<<postratio<<endl;
    cout<<negratio<<endl;
    cout<<zeroratio;
}