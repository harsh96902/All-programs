#include<iostream>
using namespace std;

int main(){
    int t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if(a<b){
            if(a>c){
                cout<<a<<endl;
            }
        }
        else if(a>b){
            if(a<c){
                cout<<a<<endl;
            }
        }
        else if(a<c){
            if(a>b){
                cout<<a<<endl;
            }
        }
        else if(a>c){
            if(a<b){
                cout<<a<<endl;
            }
        }
        else if(b<c){
            if(b>a){
                cout<<b<<endl;
            }
        }
        else if(b>c){
            if(b<a){
                cout<<b<<endl;
            }
        }
        else if(b<a){
            if(b>c){
                cout<<b<<endl;
            }
        }
        else{
            cout<<c<<endl;
        }
    }
}
