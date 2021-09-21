#include<iostream>
using namespace std;
int dublicate_num(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                return arr[i];
            }
        }
    }
}
int main(){
    int arr[100];
    int n = 8;
    for(int i = 0; i<5;i++){
        cin>>arr[i];  
    }
    cout<<dublicate_num(arr,n);
}