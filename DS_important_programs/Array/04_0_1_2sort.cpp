#include<iostream>
using namespace std;
void sort012(int arr[],int n){
    int a =0,b=0,c=0;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            a++;
        }
        else if(arr[i] == 1){
            b++;
        }
        else{
            c++;
        }
    }
    int arr0[a],arr1[b],arr2[c];
    for(int i=0;i<a;i++){
        cout<<0<<" ";
    }
    for(int i=0;i<b;i++){
        cout<<1<<" ";
    }
    for(int i=0;i<a;i++){
        cout<<2<<" ";
    }
}
int main(){
    int t;
    cin>>t;
    int arr[100];
    for(int i =0;i<t;i++){
        cin>>arr[i];
    }
    sort012(arr,t);

}