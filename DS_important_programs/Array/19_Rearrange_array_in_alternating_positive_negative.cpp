#include<bits/stdc++.h>
using namespace std;
void rearrange(int arr[],int n){
    int arr1[n],arr2[n],neg = 0,pos=0;
    for(int i=0;i<n;i++){
        //push all negative element into arr1;
        if(arr[i]<0){
            arr1[neg] =  arr[i];
            neg++;
        }
        else{
            //push all positive element into arr2;
            arr2[pos] = arr[i];
            pos++;
        }
    }
    // now fill the all neg and post element at alternative position
    int x = 0,y=0;
    for(int i=0;i<n;i++){
        // neg element can only at even position 
        // if x == neg means all neg element has been filled then fill only post element
        if(x!=neg && i%2 == 0){
            arr[i] = arr1[x];
            x++;
        }
        else{
            arr[i] = arr2[y];
            y++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        rearrange(arr,n);
    }   
}