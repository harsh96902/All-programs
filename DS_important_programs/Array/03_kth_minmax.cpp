#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,33,5,3,21,22,324,23};
    int n = 8;
    int k =3;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<arr[k-1];
}