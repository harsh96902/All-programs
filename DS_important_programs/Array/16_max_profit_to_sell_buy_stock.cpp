#include<iostream>
using namespace std;
int main(){
    int n = 7;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min = arr[0];
    int a=0,b=0;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
            a=i;
        }
    }
    int max = arr[a+1];
    for(int j = a+1;j<n;j++){
        if(arr[j]>max){
            max = arr[j];
        }
    }
    if(max>min){
        cout<<max-min;
    }
    else{
        cout<<0;
    }
}