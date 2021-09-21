#include<iostream>
using namespace std;

int main(){
    int n=5;
    int i = 1;
    int fact = 1;
    if(n == 1 || n ==0){
        cout<<"1";
    }
    else{
        while(i!=n+1){
            fact = fact * i;

            i++;
        }
        cout<<fact;
    }
}