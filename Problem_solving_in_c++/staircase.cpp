#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a = n-2;
    for(int i=0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(j<=a){
                cout<<" ";
            }
            else{
                cout<<"#";
            }
        }
        a = a-1;  
        cout<<endl;
    }
}