#include<iostream>
// #include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2,3,-3,-4,32,-32,323,43,-4};
    int n = 9;
    for(int i =0; i<n;i++){
        if(arr[i] < 0){
            int x = arr[i];
            for(int j=i;j>0;j--){
                arr[j] = arr[j-1];
            }
            arr[0] = x;
        }
    }
    // sort(arr,arr+n);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    
}