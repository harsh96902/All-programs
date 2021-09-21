#include<iostream>
using namespace  std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        int digit,luckynum;
        cin>>n;
        luckynum =0;
        while(n!=0){
            digit = n%10;
            n = n/10;
            if(digit == 4){
                luckynum = luckynum + 1;
            }            
        }
        cout<<luckynum<<endl;
    }
}
